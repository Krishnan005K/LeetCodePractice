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
//     vector<vector<int>>ans;
//     vector<vector<int>> pathSumSol(TreeNode* root, int targetSum,vector<int>curr) {
       
//         if(!root)
//             return ans;
//         if(!root->left && !root->right)
//         {
//             if(root->val==targetSum){
//                 curr.push_back(root->val);
//                 ans.push_back(curr);
//             }
//         }
//         curr.push_back(root->val);
//         int newSum=(targetSum)-root->val;
//         pathSumSol(root->left,newSum,curr);
//         pathSumSol(root->right,newSum,curr);
//         return ans;
//     }
//     vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
//         vector<int>curr;
//         return pathSumSol(root,targetSum,curr);

//      }
// };

class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        backtrack(root, targetSum, {}, result);
        return result;
    }

    void backtrack(TreeNode* root, int targetSum, vector<int> currentlist, vector<vector<int>>& result) {
        if (root == nullptr) {
            return;
        }
        currentlist.push_back(root->val);
        if (root->left == nullptr && root->right == nullptr && root->val == targetSum) {
            result.push_back(currentlist);
        } else {
            backtrack(root->left, targetSum - root->val, currentlist, result);
            backtrack(root->right, targetSum - root->val, currentlist, result);
        }
        currentlist.pop_back();
    }
};
