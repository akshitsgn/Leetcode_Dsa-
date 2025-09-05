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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* curr = root;
        TreeNode* node;
        TreeNode* ans = new TreeNode(val);
        if(root==nullptr){return ans ;}
        while(curr!=nullptr){
            if(curr->val<val){
                curr=curr->right;
            }
            else{
                curr=curr->left;
            }
            if(curr!=nullptr){node=curr;}
        }
        TreeNode* h = new TreeNode(val);
        if(node->val>val){
          node->left=h;
        }
        else{
          node->right=h;
        }
        return root;
    }
};