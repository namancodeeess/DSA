class Solution {
public:
bool cansplit(vector<int>& nums,int k,int limit){
    int subarray=1;
    int currentsum=0;
    for(int i=0;i<nums.size();i++){
        if(currentsum+nums[i]<=limit){
            currentsum+=nums[i];
        }
        else{
            subarray++;
            currentsum=nums[i];
            if(k<subarray){
            return false;
            }
        }
    }
    return true;
}
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high= accumulate(
            nums.begin(),
            nums.end(),
            0
        );
        while(low<=high){
            int mid=low+(high-low)/2;
            if(cansplit(nums,k,mid)){
                high=mid-1;
            }
            else{
                
                low=mid+1;
            }
        }
        return low;
        
    }
};