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
    int goodNodeHelper(TreeNode* root,int cMax)
    {
        if(!root)
            return 0;
        int nMax=cMax;
        int count=0;
        if(root->val>=cMax)
        {
            count=1;
            nMax=root->val;
        }
        count+=goodNodeHelper(root->left,nMax);
        count+=goodNodeHelper(root->right,nMax);
        return count;
    }
    int goodNodes(TreeNode* root) {
        return goodNodeHelper(root,root->val);
    }
};