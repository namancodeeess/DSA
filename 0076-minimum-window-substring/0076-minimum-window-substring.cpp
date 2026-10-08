class Solution {
public:

    bool check(vector<int>& have, vector<int>& need)
    {
        for(int i = 0; i < 256; i++)
        {
            if(have[i] < need[i])
                return false;
        }

        return true;
    }


    string minWindow(string s, string t) 
    {
        int n = s.size();
        int m = t.size();

        if(n < m)
            return "";


        vector<int> have(256, 0);
        vector<int> need(256, 0);


        
        for(int i = 0; i < m; i++)
        {
            need[t[i]]++;
        }


        int low = 0;
        int start = -1;
        int minLen = INT_MAX;


        
        for(int high = 0; high < n; high++)
        {
    
            have[s[high]]++;


            
            while(check(have, need))
            {
                int len = high - low + 1;


            
                if(len < minLen)
                {
                    minLen = len;
                    start = low;
                }


            
                have[s[low]]--;
                low++;
            }
        }


        if(start == -1)
            return "";


        return s.substr(start, minLen);
    }
};