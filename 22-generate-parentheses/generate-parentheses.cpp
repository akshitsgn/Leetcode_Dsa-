class Solution {
    void fnc(vector<string>&ans,int &n,int close,int open,string s){
        if(s.size()==(2*n)){
            ans.push_back(s);
            return;
        }
        if(open<n)fnc(ans,n,close,open+1,s+"(");
        if(close<open)fnc(ans,n,close+1,open,s+")");
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>v1;
        fnc(v1,n,0,0,"");
        return v1;
    }
};