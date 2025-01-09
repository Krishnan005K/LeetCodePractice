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

    void Small(TreeNode*root,vector<int>&arr)
    {
        if(root!=NULL)
        {
        Small(root->left,arr);
        arr.push_back(root->val);
        Small(root->right,arr);
        }
    } 
    int kthSmallest(TreeNode* root, int k) {
       vector<int>ans;
       Small(root,ans);
       return ans[k-1];
    }
};