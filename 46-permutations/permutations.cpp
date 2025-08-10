class Solution {
public:
    void permu(vector<int>&nums , vector<int>&ans , vector<vector<int>>&ans1 , int ind){
        if(ind>=nums.size()){
            ans1.push_back(ans);
            return;
        }
        for(int i=0;i<nums.size();i++){
            int ch =0;
            for(int j=0;j<ans.size();j++){
                if(nums[i]==ans[j]){ch++;break;}
            }
           if(ch==1){continue;}
           ans.push_back(nums[i]);
           permu(nums,ans,ans1,ind+1);
           ans.pop_back();
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans1;
        vector<int>ans;
        permu(nums,ans,ans1,0);
        return ans1;
    }
};