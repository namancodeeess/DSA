class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalsum=0;
        for(int i=0;i<n;i++){
            totalsum+=nums[i];
        }
        int left=0;
        int right=0;
        for(int i=0;i<n;i++){
            right=totalsum-nums[i]-left;
        if(left==right){
            return i;
        }
        left=left+nums[i];
    }
        return -1;
        
    }
};