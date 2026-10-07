class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left=0;
        int zeros=0;
        int ans =0;
        for(int r=0;r<n;r++){
            if(nums[r]==0){
                zeros++;

            }
            while(zeros>k){
                if(nums[left]==0){
                    zeros--;
                }
                left++;
            }
            ans=max(ans,r-left+1);
        }
        return ans;
        
    }
};