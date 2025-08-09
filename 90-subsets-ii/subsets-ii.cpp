class Solution {
public:
void sumret(vector<int>&arr ,vector<int>&ans1, vector<vector<int>>&ans,int ind){
      ans.push_back(ans1);
      for(int i=ind;i<arr.size();i++){
        if(i!=ind && arr[i]==arr[i-1]){continue;}
        ans1.push_back(arr[i]);
        sumret(arr,ans1,ans,i+1);
        ans1.pop_back();
      }
  }
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
         vector<vector<int>>ans;
         vector<int>ans1;
         sort(arr.begin(),arr.end());
         sumret(arr,ans1,ans,0);
         return ans;
    }
};
