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
    void findSumofPaths(TreeNode* root,int&ans,int value)
    {
        if(!root)
            return ;
        if(!root->left && !root->right)
        {
            ans+=(value*10)+root->val;
        }
        value=(value*10)+root->val;
        findSumofPaths(root->left,ans,value);
        findSumofPaths(root->right,ans,value);
    }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        findSumofPaths(root,ans,0);
        return ans;

    }
};