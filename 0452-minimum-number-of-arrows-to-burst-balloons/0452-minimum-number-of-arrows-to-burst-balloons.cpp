class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& point) {
        int n=point.size();
        sort(point.begin(),point.end(),[](auto &a,auto &b){
            return a[1]<b[1];
        });
        int arrows = 1;
        long long arrow= point[0][1]; //ending hai smallest
        for(int i=1;i<n;i++){
            if(point[i][0]>arrow){
                arrows++;
                arrow=point[i][1];
            }
        }
        return arrows;
    }
};