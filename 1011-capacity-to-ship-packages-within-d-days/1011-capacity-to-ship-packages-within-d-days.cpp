class Solution {
public:
bool canship(vector<int> &weight,int days,int limit){
    int currweight=0;
    int day=1;
    for(int i=0;i<weight.size();i++){
        if(currweight+weight[i]<=limit){
            currweight+=weight[i];
        }
        else{
            day++;
            currweight=weight[i];
            if(day>days){
                return false;
            }
        }
    }
    return true;

}
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(
            weights.begin(),
            weights.end(),
            0
        );
        while(low<=high){
            int mid = low+(high-low)/2;
            if(canship(weights,days,mid)){
                high=mid-1;

            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};