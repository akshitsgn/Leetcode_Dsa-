class Solution {
public:
    void combsum(vector<int>&v , int t , int ind , vector<int>&ds,vector<vector<int>>&ans){
        if(ind==v.size()){
            if(t==0){
                ans.push_back(ds);
            }
            return;
        }

        if(v[ind]<=t){
            ds.push_back(v[ind]);
            combsum(v,t-v[ind],ind,ds,ans);
            ds.pop_back();
        }
        combsum(v,t,ind+1,ds,ans);
    }

    vector<vector<int>> combinationSum(vector<int>&v, int t) {
        vector<int>ds;
        vector<vector<int>>ans;
        combsum(v,t,0,ds,ans);
        return ans;
    }
};