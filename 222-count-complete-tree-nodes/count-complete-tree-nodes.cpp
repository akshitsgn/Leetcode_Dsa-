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
    void cntnodes(TreeNode* root,int &cnt){
       if(root==nullptr){return;}
       cnt++;
       cntnodes(root->left,cnt);
       cntnodes(root->right,cnt);
    }
    int countNodes(TreeNode* root) {
       int a = 0;
       cntnodes(root,a);
       return a;
    }
};