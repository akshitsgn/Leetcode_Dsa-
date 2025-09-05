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
    void flatten(TreeNode* root) {
       TreeNode* curr = root;
       vector<TreeNode*>v;
       int count=0;
       if(root==nullptr){
         return;
       }
       while(curr!=nullptr){
           if(curr->left==nullptr){
              v.push_back(curr);
              //print curr;
              curr=curr->right;
           }
           else{
               TreeNode* node = ip(curr);
               if(node->right==nullptr){
                 v.push_back(curr);
                //print curr;
                node->right=curr;
                curr=curr->left;
               }
               else{
                node->right=nullptr;
                curr=curr->right;
               }
           }
       }
      for(int i=0;i<v.size()-1;i++){
            TreeNode* curr1 = v[i];
            TreeNode* next = v[i+1];
            curr1->right=next;
            curr1->left = nullptr;
        }
    }
};