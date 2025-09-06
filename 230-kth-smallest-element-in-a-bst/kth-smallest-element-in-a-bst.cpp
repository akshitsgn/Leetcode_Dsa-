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
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* curr = root;
        int cnt = 0;
        int ans;
        while(curr!=nullptr){
            if(curr->left==nullptr){
               //print curr;
              cnt++;
              if(cnt==k){
               ans = curr->val;
              }
              cout<<curr->val<<endl;
               curr=curr->right;
            }
            else{
                TreeNode* node = ip(curr);
                if(node->right==nullptr){
                    node->right=curr;
                    curr=curr->left;
                }
                else{
               cnt++;
              if(cnt==k){
                 ans = curr->val;
                //return curr->val;
              }
                     cout<<curr->val<<endl;
                    //print curr;
                    node->right=nullptr;
                    curr=curr->right;

                }
            }
        }
        cout<<ans<<endl;
          return ans;
    }
};