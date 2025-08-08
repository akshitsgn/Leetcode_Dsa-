class Solution {
    void combsum(int ind , int t , vector<int>c , vector<int>&v , vector<vector<int>>&ans){
          if(t==0){
            ans.push_back(v);
            return;
          }
          for(int i=ind;i<c.size();i++){
                if(i>ind && c[i]==c[i-1]){continue;}
                if(t<c[i]){break;}
                v.push_back(c[i]);
                combsum(i+1,t-c[i],c,v,ans);
                v.pop_back();
          }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>&c, int t) {
        sort(c.begin(),c.end());
        vector<int>v;
        vector<vector<int>>ans;
        combsum(0,t,c,v,ans);
        return ans;
    }
};