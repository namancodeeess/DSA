class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        int prevnodelete=arr[0];
        int prevonedelete=INT_MIN;
        int res=arr[0];
        for(int i=1;i<n;i++){
           int nodelete=max(prevnodelete+arr[i],arr[i]);
            int v2;
            if(prevonedelete==INT_MIN)
                v2=arr[i];
                else
                    v2 = prevonedelete+arr[i];
            int onedelete=max(v2,prevnodelete);
            res=max(res,max(onedelete,nodelete));
            prevnodelete=nodelete;
            prevonedelete=onedelete;
                
        }
        return res;
        
    }
};