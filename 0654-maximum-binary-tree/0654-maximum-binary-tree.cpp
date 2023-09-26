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
    TreeNode* build(vector<int> &nums,int i,int j,unordered_map<int,int> &mp){
        if(i>j) return NULL;
        int maxi=*max_element(nums.begin()+i,nums.begin()+j+1);
        TreeNode* root=new TreeNode(maxi);
        root->left=build(nums,i,mp[maxi]-1,mp);
        root->right=build(nums,mp[maxi]+1,j,mp);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        return build(nums,0,nums.size()-1,mp);
    }
};