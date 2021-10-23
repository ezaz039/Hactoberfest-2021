//Question link: https://leetcode.com/problems/longest-valid-parentheses/
//Please consider this under Hacktober Fest tag 


class Solution {
public:
    int longestValidParentheses(string s) {
        
      int open=0; int close=0;
        
        int maximum=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                open++;
            }
            else{
                close++;
            }
            if(close==open){
               int length= open+close;
                maximum= max(length, maximum);
            }
            else if(close>open){
                close=open=0;
            }
        }
        
        open=close=0;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]=='('){
                open++;
            }
            else{
                close++;
            }
            if(close==open){
                int length= open+close;
                 maximum= max(length, maximum);
            }
            else if(close<open){
                close=open=0;
            }
        }
        return maximum;
    }
};
