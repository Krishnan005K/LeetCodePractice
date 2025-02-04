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

class Solution {

public:
    int count=0;
    int res=0;
    void in(TreeNode* root,int k) {
        
        if(root==nullptr)return ;
        in(root->left,k);
        count++;
        if(count==k){
            res=root->val;
            return;
        }
        in(root->right,k);
        return ;
    }

public:
    int kthSmallest(TreeNode* root, int k) {
        in(root,k);
        return res;
        
    }
};