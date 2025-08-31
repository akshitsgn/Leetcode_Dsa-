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
    void help1(TreeNode* root,vector<int>&v1){
        if(root==nullptr){
            v1.push_back(-1);
            return ;
        }
        v1.push_back(root->val);
        help1(root->left,v1);
        help1(root->right,v1);
    }
    void help2(TreeNode* root,vector<int>&v2){
       if(root==nullptr){
           v2.push_back(-1);
           return;
       }
       v2.push_back(root->val);
       help2(root->right,v2);
       help2(root->left,v2);
    }
    bool isSymmetric(TreeNode* root) {
        vector<int>v1,v2;
        help1(root->left,v1);
        help2(root->right,v2);
        if(v1==v2){
            return true;
        }
        return false;
    }
};