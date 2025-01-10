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
    int maxLevelSum(TreeNode* root) {
        
        
        queue<TreeNode*>q;
        q.push(root);
        int Max=INT_MIN,level=0,MaxLev=INT_MIN;
        while(!q.empty())
        {
            level++;
            int s=q.size();
            vector<int>curr;
            int sum=0;
            for(int i=0;i<s;i++)
            {
                TreeNode* current=q.front();
                q.pop();
                sum+=current->val;
                if(current->left)
                    q.push(current->left);
                if(current->right)
                    q.push(current->right);
            }
            if(Max<sum)
            {
                Max=sum;
                MaxLev=level;
            }
            
        }
        return MaxLev;
    }
};