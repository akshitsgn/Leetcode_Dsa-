class Solution {
public:
    void permu(map<int,int> mp, map<int,int>& mp1, vector<int>& nums,vector<int>& ans, vector<vector<int>>& ans1, int ind) {
        if (ind >= nums.size()) {
            ans1.push_back(ans);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if(i>0 && nums[i]==nums[i-1])continue;
            mp1[nums[i]]++;
            if (mp1[nums[i]] > mp[nums[i]]) {
                mp1[nums[i]]--;
                continue;
            }
            ans.push_back(nums[i]);
            permu(mp, mp1, nums, ans, ans1, ind + 1);
            mp1[ans.back()]--;
            ans.pop_back();
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans1;
        vector<int> ans;
        map<int,int> mp, mp1;
        sort(nums.begin(),nums.end());
        for (int x : nums) mp[x]++;
        permu(mp, mp1, nums, ans, ans1, 0);
        return ans1;
    }
};
