/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        map<int,int>mp;
        queue<pair<TreeNode*,int>>q;
        vector<int>v;
        if(root==nullptr){return v;}
        q.push({root,0});
        while(!q.empty()){
            int a = q.size();
          for(int i=0;i<a;i++){
              int x = q.front().second;
              if(q.front().first->left){q.push({q.front().first->left,x+1});}
               if(q.front().first->right){q.push({q.front().first->right,x+1});}
                mp[x]=q.front().first->val;
               q.pop();
          }
        }
        for(auto i:mp){
            v.push_back(i.second);
        }
        return v;
    }
};