class Solution {
public:
     
    void parti(vector<vector<string>>&v1,vector<string>&v2,string s ,int ind){
        if(ind==s.size()){
            v1.push_back(v2);
            return;
        }
        for(int i=ind;i<s.size();i++){
           if(pallindrome(s,ind,i)){
            v2.push_back(s.substr(ind, i-ind+1));
            parti(v1,v2,s,i+1);
            v2.pop_back();
           }
        }
    }
    bool pallindrome(string s ,int start , int end){
        while(start<end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;end--;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>v1;
        vector<string>v2;
        parti(v1,v2,s,0);
        return v1;
    }
};