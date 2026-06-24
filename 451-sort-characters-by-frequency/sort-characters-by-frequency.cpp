class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>>v(62,{0,'a'});
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                int a = v[s[i]-'a'].first+1;
                v[s[i]-'a']={a,s[i]};
            }
            else if(s[i]>='A' && s[i]<='Z'){
                 int a = v[(s[i]-'A')+26].first+1;

                v[(s[i]-'A')+26]={a,s[i]};
            }
            else{
                int a = v[(s[i]-'0')+52].first+1;
                v[(s[i]-'0')+52]={a,s[i]};
            }
        }
        sort(v.rbegin(),v.rend());
        for(auto i : v ){
            if(i.first!=0){
                for(int j=0;j<i.first;j++){
                   ans+=i.second;
                }
            }
            else{break;}
        }
        return ans;
    }
};