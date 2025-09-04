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
    void preorder(vector<TreeNode*>&st,TreeNode* root){
        if(root==nullptr){return;}
        st.push_back(root);
        preorder(st,root->left);
        preorder(st,root->right);
    }
    void flatten(TreeNode* root) {
        vector<TreeNode*>st;
        if(root==nullptr){return ;}
        preorder(st,root);
        for(int i=0;i<st.size()-1;i++){
            TreeNode* curr = st[i];
            TreeNode* next = st[i+1];
            curr->right=next;
            curr->left = nullptr;
        }

    }
};