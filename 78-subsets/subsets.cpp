class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        for(int i=0;i<(1<<nums.size());i++){
            vector<int>v1;
            for(int j=0;j<nums.size();j++){
                if(((i)&(1<<j))!=0){
                    v1.push_back(nums[j]);
                }
            }
            v.push_back(v1);
        }
        return v;
    }
};