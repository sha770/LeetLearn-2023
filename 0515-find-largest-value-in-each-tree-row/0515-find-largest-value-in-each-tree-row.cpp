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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(root==NULL){
            return {};
        }
        queue<TreeNode*>q;
        q.push(root);
        while(q.empty()==false){
            int mx=INT_MIN;
           int count=q.size();
           for(int i=0;i<count;i++){
               TreeNode* curr=q.front();
               q.pop();
               mx=max(mx,curr->val);
               if(curr->left) q.push(curr->left);
               if(curr->right) q.push(curr->right);
           }
           ans.push_back(mx);
        }
        return ans;
    }
};