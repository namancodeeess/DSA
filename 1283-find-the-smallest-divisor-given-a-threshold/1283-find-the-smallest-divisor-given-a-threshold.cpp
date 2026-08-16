class Solution {
public:
bool possible(vector<int> &nums,int threshold,int divisor){
    int sum=0;
    for(int x:nums){
        sum+=(x+divisor-1)/divisor;
        if(sum>threshold){
            return false;
        }
    }
    return true;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(nums,threshold,mid)){
                high=mid-1;
            }
        else{
            low=mid+1;
        }
        

    }
    return low;
}
};