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
    void rightView(TreeNode* curr, vector<int>& result, int currDepth) {
        if (!curr) return;
        if (currDepth == result.size()) result.push_back(curr->val);
        rightView(curr->left, result, currDepth + 1);
        rightView(curr->right, result, currDepth + 1);
    }
    int findBottomLeftValue(TreeNode* root) {
        vector<int> result;
        rightView(root, result, 0);

        return result[result.size()-1];

    }
};