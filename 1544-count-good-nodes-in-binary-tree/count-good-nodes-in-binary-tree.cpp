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
    int goodNodeHelper(TreeNode* root,int Max)
    {
        if(!root)
            return 0;
      
        int count=0;
        if(root->val>=Max)
        {
            count=1;
            Max=root->val;
        }
        count+=goodNodeHelper(root->left,Max);
        count+=goodNodeHelper(root->right,Max);
        return count;
    }
    void Helper(TreeNode * root, int &ans,int Max)
    {
        if(!root)
            return;
        if(root->val >=Max)
        {
            ans++;
            Max=root->val;
        }
        Helper(root->left,ans,Max);
        Helper(root->right,ans,Max);
    }
    int goodNodes(TreeNode* root) {
        //return goodNodeHelper(root,root->val);
        int ans=0;
        Helper(root,ans,root->val);
        return ans;
    }
};