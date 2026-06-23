class Solution {
public:
    string removeOuterParentheses(string s) {
        string h="";int cnt = 0;
        for(int i=0;i<s.size();i++){
             if(s[i]=='('){
                if(cnt!=0){
                   h+=s[i];
                }
                cnt++;
             }
             else{
                cnt--;
                if(cnt!=0){
                    h+=s[i];
                }
             }
        }
        return h;
    }
};