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
    bool isValidBST(TreeNode* root) {
        TreeNode* curr = root;
        int cnt = 0;
        int ans;
        bool res = true;
        while(curr!=nullptr){
            if(curr->left==nullptr){
                if(cnt==0){
                    ans = curr->val;
                }
                else{
                    if(ans<curr->val){
                        ans = curr->val;
                    }
                    else{
                       res = false;
                    }
                }
                cnt++;
               curr=curr->right;
            }
            else{
                TreeNode* node = ip(curr);
                if(node->right==nullptr){
                    node->right=curr;
                    curr=curr->left;
                }
                else{
                      if(cnt==0){
                    ans = curr->val;
                }
                else{
                    if(ans<curr->val){
                        ans = curr->val;
                    }
                    else{
                      res = false;
                    }
                }
                cnt++;
                    node->right=nullptr;
                    curr=curr->right;

                }
            }
        }
        return res;
    }
};