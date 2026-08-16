class Solution {
public:
bool possible(vector<int>&nums,int maxoperation,int limit){
    int operation=0;
    for(int x:nums){
        operation+=(x-1)/limit;
        if(operation>maxoperation){
            return false;
        }

    }
    return true;;
}
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(nums,maxOperations,mid)){
                high=mid-1;

            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};