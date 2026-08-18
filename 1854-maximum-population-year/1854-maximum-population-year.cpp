class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
         vector<pair<int,int>> events;

        for(auto log : logs) {
            int birth = log[0];
            int death = log[1];

            events.push_back({birth, +1});
            events.push_back({death, -1});
        }
        sort(events.begin(),events.end());
        int curr=0;
        int max=0;
        int ans=0;
        for(auto event : events) {

            curr+= event.second;
            if(curr>max){
                max= curr;
                ans = event.first;

            }

        
    }
    return ans;
    }
};