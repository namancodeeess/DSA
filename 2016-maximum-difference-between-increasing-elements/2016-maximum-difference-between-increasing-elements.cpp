class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int premin=nums[0];
        int ans=-1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>premin){
                ans = max(ans,nums[i]-premin);
            }

                premin=min(premin,nums[i]);
        }
        return ans;
    }
        
};