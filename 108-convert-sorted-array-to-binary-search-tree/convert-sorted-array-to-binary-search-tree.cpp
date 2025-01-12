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
    TreeNode* createBinaryTree(const vector<int>& nums, int start, int end) {
        if (start > end)
            return NULL;
        int mid = start + (end - start) / 2;
        TreeNode* tree = new TreeNode(nums[mid]);
        tree->left = createBinaryTree(nums, start, mid - 1);
        tree->right = createBinaryTree(nums, mid + 1, end);
        return tree;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return NULL;
        TreeNode* root = createBinaryTree(nums, 0, n - 1);
        return root;
    }
};