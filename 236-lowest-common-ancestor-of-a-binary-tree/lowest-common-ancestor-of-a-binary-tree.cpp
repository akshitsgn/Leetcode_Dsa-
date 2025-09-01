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

    void check(TreeNode* root ,TreeNode* p , TreeNode* q , vector<vector<TreeNode*>>&v , vector<TreeNode*>&ans,int &c){
       if(root==nullptr || c>=2){return;}
       ans.push_back(root);
       if(root==p||root==q){
        v.push_back(ans);
        c++;
       }
       check(root->left,p,q,v,ans,c);
       check(root->right,p,q,v,ans,c);
       ans.pop_back();
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>ans;
        int ch=0;
        vector<vector<TreeNode*>>v;
        TreeNode* res;
        set<TreeNode*>st;
        check(root,p,q,v,ans,ch);
        for(int i=0;i<v[0].size();i++){
            st.insert(v[0][i]);
        }
         for(int i=0;i<v[1].size();i++){
            if(st.find(v[1][i])!=st.end()){
                res = v[1][i];
            }
         }
        return res; 
    }
};