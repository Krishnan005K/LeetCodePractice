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
    vector<TreeNode*> generateTrees(int n) {
        return generatePath(1, n);
    }
    
    vector<TreeNode*> generatePath(int s, int e) {
        vector<TreeNode*> res;
        if (s > e) {
            res.push_back(nullptr);
            return res;
        }

        for (int i = s; i <= e; ++i) {
            vector<TreeNode*> leftGenerate = generatePath(s, i - 1);
            vector<TreeNode*> rightGenerate = generatePath(i + 1, e);

            for (TreeNode* left : leftGenerate) {
                for (TreeNode* right : rightGenerate) {
                    TreeNode* root = new TreeNode(i);
                    root->left = left;
                    root->right = right;
                    res.push_back(root);
                }
            }
        }
        return res;
    }
};