class Solution {
public:
     
     void combosum(vector<int>&ch ,vector<int>&ans ,int target,int k, vector<vector<int>>&ans1 , int ind){
         if(target==0 && ans.size()==k){
                ans1.push_back(ans);
        }
          for(int i=ind;i<ch.size();i++){
            if(i>ind && ch[i]==ch[i-1])continue;
            if(target<ch[i]){break;}
            ans.push_back(ch[i]);
            combosum(ch,ans,target-ch[i],k,ans1,i+1);
            ans.pop_back();
          }
     }
   
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>choice={1,2,3,4,5,6,7,8,9};
        vector<int>ans;
        vector<vector<int>>ans1;
        combosum(choice,ans,n,k,ans1,0);
        return ans1;
    }
};