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
    TreeNode* ip(TreeNode* root){
        TreeNode* curr = root->left;
        while(curr->right!=nullptr && curr->right!=root){
            curr=curr->right;
        }
        return curr;
    }
    vector<int> preorderTraversal(TreeNode* root) {
      vector<int>ans;
        TreeNode* curr = root;
        while(curr!=nullptr){
            if(curr->left==nullptr){
                ans.push_back(curr->val);
                curr=curr->right;
            }
            else{
                TreeNode* res = ip(curr);
                if(res->right==nullptr){
                     ans.push_back(curr->val);
                    res->right=curr;
                    curr=curr->left;
                }
                else{
                  res->right=nullptr;
                  curr=curr->right;
                }
            }
        }
        return ans;
    }
};