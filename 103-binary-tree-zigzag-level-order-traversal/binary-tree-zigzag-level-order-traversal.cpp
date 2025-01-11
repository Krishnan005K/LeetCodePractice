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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)
            return {};
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        bool LtoR=true;
        while(!q.empty())
        {
            int s=q.size();
            vector<int>curr(s);
            for(int i=0;i<s;i++)
            {
                TreeNode* current=q.front();
                q.pop();
                int index;
                if(LtoR)
                    index=i;
                else
                    index=s-1-i;
                curr[index]=current->val;
                if(current->left)
                    q.push(current->left);
                if(current->right)
                    q.push(current->right);

            }
            LtoR=!LtoR;
            ans.push_back(curr);

        }
        return ans;
    }
};