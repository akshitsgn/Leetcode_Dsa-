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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long>> q;
        q.push({root,1});
        long long ans = 0;
        while(!q.empty()){
            long long a = q.size();
            long long mini=1e18,maxi=0;
            long long z1 = q.front().second;
            for(int i=0;i<a;i++){
                long long z = q.front().second-z1;
                if(q.front().first->left){q.push({q.front().first->left,2*z+1});}
                if(q.front().first->right){q.push({q.front().first->right,2*z+2});}
                maxi = max(maxi,q.front().second);
                mini = min(mini,q.front().second);
                cout<<z<<endl;
                q.pop();
            }
            if(a>0){
                ans = max(ans, maxi-mini+1);  
            }
        }
        return ans; 
    }
};
