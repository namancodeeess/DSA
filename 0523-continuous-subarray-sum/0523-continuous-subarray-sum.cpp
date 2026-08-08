class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>f;
        f[0]=-1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem = sum%k;
            if(f.find(rem)!=f.end()){
                if(i-f[rem]>=2){
                    return true;
                }
                
                }
                else{
                    f[rem]=i;
                }
            }
        return false;
    }
};