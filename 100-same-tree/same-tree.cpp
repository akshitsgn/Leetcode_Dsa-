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
   void checkp(TreeNode* p,vector<int>&v1){
        if(p==nullptr){
            v1.push_back(1e9);
            return;
        }
        v1.push_back(p->val);
        checkp(p->left,v1);
        checkq(p->right,v1);
    }
    void  checkq(TreeNode* q,vector<int>&v2){
      if(q==nullptr){
        v2.push_back(1e9);
            return;
        }
        v2.push_back(q->val);
        checkp(q->left,v2);
        checkq(q->right,v2);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>v1,v2;
        checkp(p,v1);
        checkq(q,v2);
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
        }
        if(v1==v2){
            return true;
        }
        return false;
    }
};