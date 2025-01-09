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
    bool isSymmetric(TreeNode* root) {
        return Symmetric(root->left,root->right);
    }
    bool Symmetric(TreeNode* l1,TreeNode* l2)
    {
        if(l1==NULL && l2==NULL)
            return true;
        if(l1==NULL || l2==NULL)
            return false;
        if(l1->val!=l2->val)
            return false;
        return Symmetric(l1->left,l2->right)&& Symmetric(l1->right,l2->left);
    }
};