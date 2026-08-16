class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int low =0;
        int count=0;
        int sum=0;
        for(int high=0;high<arr.size();high++){
            sum = sum + arr[high];
            if(high-low+1==k){
                if(sum>=threshold*k){
                    count++;
                }
                sum = sum-arr[low];
                low++;
            }
        
        }
        return count;
    }
};