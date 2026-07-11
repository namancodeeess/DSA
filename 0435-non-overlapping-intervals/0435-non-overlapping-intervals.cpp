class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& interval) {
        int n=interval.size();
        sort(interval.begin(),interval.end(),
        [](auto &a,auto &b){
            return a[1]< b[1];
        });
        int count=0;
        int prevend=interval[0][1];
        for(int i=1;i<n;i++){
            int start =interval[i][0];
            int end = interval[i][1];
            if(start>=prevend){
                prevend=end;
            }
            else{
                count++;
            }
        }
        return count;
        
        
    }

};