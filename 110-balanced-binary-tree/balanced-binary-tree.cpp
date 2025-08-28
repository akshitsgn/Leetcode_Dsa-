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
    int check(TreeNode* root,bool &val) {
        if(val){
        if(root==nullptr){
            return 0;
        }
        int lh = (val) ? check(root->left,val) : -1 ;
        int rh = (val) ? check(root->right,val) : -1 ;
        if(abs(lh-rh)>1 || !val){
            val = false;
            return -1 ;
        }
        return 1+max(lh,rh);
        }
        else{
            return -1;
        }
    }

    bool isBalanced(TreeNode* root){
        bool val = true;
       if(check(root,val)==-1){
        return false;
       }
       else{return true;}
    }

};