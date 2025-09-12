class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       sort(g.begin(),g.end());
       sort(s.begin(),s.end());
        int res =0,cnt=0;
       for(int i=0;i<g.size();i++){
        for(int j=res;j<s.size();j++){
             if(g[i]<=s[j]){
                res = j+1;
                cnt++;
                cout<<g[i]<<" "<<s[j]<<endl;
                break;
             }
        }
        if(res==0){
            break;
        }
       }
       return cnt;
    }
};