class Solution {
public:
    void sumret(vector<int> &arr, vector<int> &ans1, set<vector<int>> &ans, int sum, int ind) {
        if (ind == arr.size()) {
            ans.insert(ans1);
            return;
        }
        ans1.push_back(arr[ind]);
        sumret(arr, ans1, ans, sum, ind + 1);
        ans1.pop_back();
        sumret(arr, ans1, ans, sum, ind + 1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        set<vector<int>> ans;
        vector<int> ans1;
        int sum = 0;
        sumret(arr, ans1, ans, sum, 0);
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};
