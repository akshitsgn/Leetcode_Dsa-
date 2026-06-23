class Solution {
public:
    string reverseWords(string s) {
        string h = "" , ans = "";
        for(int i=s.size()-1 ;i>=0 ;i--){
            if(s[i]==' '){
                if(h.size()!=0){
                   reverse(h.begin(),h.end());
                   ans+=h;
                   ans+=' ';
                }
                h="";
            }
            else{
                h+=s[i];
            }
        }
        if(h.size()!=0){
            reverse(h.begin(),h.end());
            ans+=h;
        }
        if(ans[ans.size()-1]==' '){
           return  ans.substr(0,ans.size()-1);
        }
        return ans;
    }
};