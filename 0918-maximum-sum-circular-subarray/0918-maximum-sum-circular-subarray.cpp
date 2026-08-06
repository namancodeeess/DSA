class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int currmax=nums[0];
        int currmin=nums[0];
        int maxsum=nums[0];
        int minsum=nums[0];
        int totalsum=nums[0];
        for(int i=1;i<n;i++){
            totalsum+=nums[i];
            currmax= max(currmax+nums[i],nums[i]);
            maxsum=max(maxsum,currmax);

            currmin=min(currmin+nums[i],nums[i]);
            minsum=min(minsum,currmin);
        }
        if(maxsum<0){
            return maxsum;


        }
        return max(maxsum,totalsum-minsum);
        
    }
};