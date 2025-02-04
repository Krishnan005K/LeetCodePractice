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
// class Solution {
// public:
//     bool find(TreeNode* root,int &sum,int value,int targetSum)
//     {
//         if(!root->left && !root->right)
//         {
//             sum+=value+root->val;
//             return sum==targetSum;
//         }
//         value+=root->val;
//         find(root->left,sum,value,targetSum);
//         find(root->right,sum,value,targetSum);
//         return false;
//     }
//     bool hasPathSum(TreeNode* root, int targetSum) {
//         if(!root)
//             return false;
//         int sum=0;
//         return find(root,sum,0,targetSum);
//     }
// };
class Solution {
public:

    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(!root)return false;
        if(!root->left && !root->right){
            return root->val==targetSum;
        }

        int ns=(targetSum)-root->val;
        return hasPathSum(root->left,ns) || hasPathSum(root->right,ns);
    }
};
