class Solution {
    public: 
    bool palinhelp(int i,int j,string s){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i=i+1;
            j=j-1;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            int left = s[i];
            int right=s[j];
            if(left!=right){
                return palinhelp(i+1,j,s) || palinhelp(i,j-1,s);

            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};