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
   void parentmapping(TreeNode* root,map<TreeNode*,TreeNode*>&pmp){
       queue<TreeNode*>q;
       if(root==nullptr){return;}
       q.push(root);
       while(!q.empty()){
          int a = q.size();
          for(int i=0;i<a;i++){
              if(q.front()->left){
                pmp[q.front()->left]=q.front();
                q.push(q.front()->left);
              }
              if(q.front()->right){
                pmp[q.front()->right]=q.front();
                q.push(q.front()->right);
              }
              
             q.pop();
          }
       }
   }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*,TreeNode*>pmp;
        queue<TreeNode*>q;
        map<TreeNode*,bool>vmp;
        vector<int>ans;
        q.push(target);
        vmp[target]=true;
        int cnt =0;
        parentmapping(root,pmp);
        for(auto i:pmp){
           // cout<<i.first->val<<" "<<i.second->val<<endl;
        }
        while(!q.empty()){
          if(cnt==k){break;}
          int a = q.size();
          for(int i=0;i<a;i++){
            if(q.front()->left && !vmp[q.front()->left]){
                q.push(q.front()->left);
                vmp[q.front()->left]=true;
            }
              if(q.front()->right && !vmp[q.front()->right]){
                q.push(q.front()->right);
                vmp[q.front()->right]=true;
            }
            if(pmp[q.front()] && !vmp[pmp[q.front()]]){
                q.push(pmp[q.front()]);
                vmp[pmp[q.front()]]=true;
            }
           cout<<q.front()->val<<endl;
            q.pop();
          }
          cnt++;
        }
        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};