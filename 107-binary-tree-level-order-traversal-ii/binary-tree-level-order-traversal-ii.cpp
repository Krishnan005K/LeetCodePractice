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
    vector<vector<int>>ans;
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)
            return {};
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            vector<int>curr;
            for(int i=0;i<s;i++)
            {
                TreeNode * current =q.front();
                q.pop();
                curr.push_back(current->val);
                if(current->left)
                    q.push(current->left);
                if(current->right)
                    q.push(current->right);
            }
            ans.push_back(curr);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};