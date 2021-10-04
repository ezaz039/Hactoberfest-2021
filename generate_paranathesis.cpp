class Solution {
public:
    vector<string>res;
   
    void bt(int n,int right,int left,string s){
        if(right<0 || left<0)
            return;
        if(left==0 && right==0){
            res.push_back(s);
            return;
        }
        
        if(left>0) 
            bt(n,right+1,left-1,s+'(');
        if(right>0) 
            bt(n,right-1,left,s+')');
        return;
    }
    vector<string> generateParenthesis(int n) {
        if(n<=0)
            return {};
        string s;
        bt(n,0,n,s);
        return res;
    }
};
