/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void Helper(TreeNode* root, vector<string>& ans, string curr) {
        if (!root)
            return ;
        curr.append(to_string(root->val));

        if (!root->left && !root->right) {
            ans.push_back(curr);
        }
            curr.append("->");
            
            Helper(root->left,ans,curr);
            Helper(root->right,ans,curr);


    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        Helper(root,ans,"");
        return ans;
    }
};