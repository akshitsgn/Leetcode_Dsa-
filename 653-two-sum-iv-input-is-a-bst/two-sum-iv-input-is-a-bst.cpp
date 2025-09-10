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
    void trav(TreeNode* root,vector<int>&ans){
        if(root==nullptr){
            return;
        }
        trav(root->left,ans);
        ans.push_back(root->val);
        trav(root->right,ans);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        if(root==nullptr){
            return root;
        }
        TreeNode* curr = root;
        trav(curr,ans);
        int l=0,r=ans.size()-1;
        cout<<ans[l]+ans[r]<<endl;
        while(l<r){
            if(ans[l]+ans[r]==k){
             return true;
            }
            if(ans[l]+ans[r]>k){
                r--;
            }
            if(ans[l]+ans[r]<k){
                l++;
            }
        }
            return false;
    }
};