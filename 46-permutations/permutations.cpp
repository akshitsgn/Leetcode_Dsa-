class Solution {
public:
    void permu(vector<int>&nums , vector<int>&ans , vector<vector<int>>&ans1 , vector<vector<int>>&ans2 , int ind){
        if(ind>=nums.size()){
            ans1.push_back(ans);
            return;
        }
        vector<int>check = ans2[ind];
        for(int i=0;i<check.size();i++){
            int ch =0;
            for(int j=0;j<ans.size();j++){
                if(check[i]==ans[j]){ch++;break;}
            }
           if(ch==1){continue;}
           ans.push_back(check[i]);
           permu(nums,ans,ans1,ans2,ind+1);
           ans.pop_back();
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans1;
        vector<vector<int>>ans2;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans2.push_back(nums);
        }
        permu(nums,ans,ans1,ans2,0);
        return ans1;
    }
};