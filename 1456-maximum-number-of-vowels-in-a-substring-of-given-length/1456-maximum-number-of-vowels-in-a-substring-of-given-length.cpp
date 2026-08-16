class Solution {
public:
  bool vowel(char ch)
    {
        return ch == 'a' || ch == 'e' || ch == 'i' || 
               ch == 'o' || ch == 'u';
    }
    int maxVowels(string s, int k) {
        int high =0;
        int low=0;
        int count =0;
        int ans=0;
        for(int high =0;high<s.length();high++){
            if(vowel(s[high])){
                count++;}


            if(high-low+1==k){
                ans = max(ans,count);
                if(vowel(s[low])){
                    count--;
                }
                low++;
            }
        }
        return ans;
        }
 };