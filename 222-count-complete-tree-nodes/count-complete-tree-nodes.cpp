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
    int cntnodes(TreeNode* root,int &cnt){
        queue<TreeNode*>q;
        if(root==nullptr){
            return 0;
        }
        q.push(root);
        while(!q.empty()){
            int a = q.size();
            for(int i=0;i<a;i++){
                if(q.front()->left){
                    q.push(q.front()->left);
                }
                if(q.front()->right){
                    q.push(q.front()->right);
                }
                cnt++;
                q.pop();
            }
        }
        return cnt;
    }
    int countNodes(TreeNode* root) {
       int a = 0;
       cntnodes(root,a);
       return a;
    }
};