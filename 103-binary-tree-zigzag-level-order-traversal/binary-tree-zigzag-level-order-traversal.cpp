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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>v;
        bool flag = false;
        if(root==nullptr){
            return v;
        }
        q.push(root);
        while(!q.empty()){
            vector<int>v1;
        //    TreeNode* node = q.top();
        //    q.pop();
        int a = q.size();
        for(int i=0;i<a;i++){
           v1.push_back(q.front()->val);
           if(q.front()->left!=nullptr){q.push(q.front()->left);}
           if(q.front()->right!=nullptr){q.push(q.front()->right);}
           q.pop();
        }
        if(flag){
            reverse(v1.begin(),v1.end());
            v.push_back(v1);
        }
        else{v.push_back(v1);}
           flag=!flag;
        }
        return v;
    }
};