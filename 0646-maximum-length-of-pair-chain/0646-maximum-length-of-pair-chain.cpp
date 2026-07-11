class Solution {
public:
    int findLongestChain(vector<vector<int>>& pair) {
        int n = pair.size();
        sort(pair.begin(),pair.end(),[](auto &a,auto b){
            return a[1]<b[1];
        });
        int count =1;
        int prevend=pair[0][1];
        for(int i=0;i<n;i++){
           int start = pair[i][0];
            if(start>prevend){
                count++;
                prevend = pair[i][1];
            }
    }
    return count;

    }
};