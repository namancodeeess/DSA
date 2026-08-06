class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n=arr.size();
        int i;
        int prevnodelete = arr[0];
        int prevonedelete = INT_MIN;
        int res=arr[0];
        for(i=1;i<n;i++){
            int olddelete=prevnodelete;
            prevnodelete = max(prevnodelete+arr[i],arr[i]);
            int v2;
            if(prevonedelete==INT_MIN){
                v2 = arr[i];
            }
            else{
                v2 = prevonedelete + arr[i];
            }
            prevonedelete = max(v2,olddelete);
            res=max(res,max(prevonedelete,prevnodelete));
        }
        return res;
        
    }
};