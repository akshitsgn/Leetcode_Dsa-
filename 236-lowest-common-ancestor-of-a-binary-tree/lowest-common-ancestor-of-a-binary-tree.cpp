/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* check(TreeNode* root , TreeNode* p , TreeNode* q){
        if(root==nullptr|| root==p || root==q){
            return root;
        }
        TreeNode* c1 = check(root->left,p,q);
        TreeNode* c2 = check(root->right,p,q);

        if(c1==nullptr){
            return c2;
        }
        else if(c2==nullptr){
            return c1;
        }
        else{
            return root;
        }
    }
    // void check(TreeNode* root ,TreeNode* p , TreeNode* q , vector<vector<TreeNode*>>&v , vector<TreeNode*>ans,int &c){
    //    if(root==nullptr){return;}
    //    if(root==p||root==q){
    //     ans.push_back(root);
    //     v.push_back(ans);
    //     c++;
    //    }
    //    if(c<2){
    //    ans.push_back(root);
    //    }
    //    check(root->left,p,q,v,ans,c);
    //    check(root->right,p,q,v,ans,c);
    // }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // vector<TreeNode*>ans;
        // int ch=0;
        // vector<vector<TreeNode*>>v;
        // TreeNode* res;
        // set<TreeNode*>st;
        // check(root,p,q,v,ans,ch);
        // for(int i=0;i<v[0].size();i++){
        //     st.insert(v[0][i]);
        // }
        //  for(int i=0;i<v[0].size();i++){
        //     if(st.find(v[0][i])!=st.end()){
        //         res = v[1][i];
        //     }
        // }

        // return res;
        TreeNode* ans = check(root,p,q);
        return ans;
        
    }
};