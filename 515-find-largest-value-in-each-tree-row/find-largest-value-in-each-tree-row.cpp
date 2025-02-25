class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if (!root)
            return {};
        vector<int> result;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelMax = INT_MIN, size = q.size();
            
            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();
                levelMax = max(levelMax, node->val);
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            result.push_back(levelMax);
        }
        return result;
    }
};