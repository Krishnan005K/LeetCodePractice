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
    int c=0;
    int ans;
    void small(TreeNode* root, int k){
        if(!root)return ;
        kthSmallest(root->left,k);
        c++;
        if(c==k){
            ans=root->val;
        }
        kthSmallest(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        small(root,k);
        return ans;
    }
};
// class Solution {
// public:

//     void Small(TreeNode*root,vector<int>&arr)
//     {
//         if(root!=NULL)
//         {
//         Small(root->left,arr);
//         arr.push_back(root->val);
//         Small(root->right,arr);
//         }
//     } 
//     int kthSmallest(TreeNode* root, int k) {
//        vector<int>ans;
//        Small(root,ans);
//        return ans[k-1];
//     }
// };