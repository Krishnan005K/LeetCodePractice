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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
            return root;
        TreeNode* temp=root;
        while(temp!=NULL)
        {
            if(p->val < temp->val && q->val < temp->val)
                temp=temp->left;
            else if(p->val > temp->val && q->val > temp->val)
                temp=temp->right;
            else
                return temp;
        }
        return NULL;
    }
};