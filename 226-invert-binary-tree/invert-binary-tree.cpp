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
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return NULL;
        TreeNode * temp=root->left;
        root->left=root->right;
        root->right=temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
        
            
    }
    // void invert(TreeNode* l1,TreeNode*l2)
    // {
    //     if(l1==NULL && l2==NULL)
    //         return ;

    //     if(l1==NULL)
    //     {
    //         l1->val=l2->val;
    //         l2=NULL;
    //     }
    //     else if(l2==NULL)
    //     {
    //         l2->val=l1->val;
    //         l1=NULL;
    //     }
    //     else
    //     {
    //         int temp=l1->val;
            
    //         l1->val=l2->val;
    //         l2->val=temp;

    //     }  
    //     invert(l1->left,l2->right);
    //     invert(l1->right,l2->left);
    // }
};
