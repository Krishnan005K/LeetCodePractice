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
    vector<double> averageOfLevels(TreeNode* root) {
        if(!root)
            return {};
        vector<double >ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            double sum=0,n=0;
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                n++;
                TreeNode* current=q.front();
                q.pop();
                sum+=current->val;
                if(current->left)
                    q.push(current->left);
                if(current->right)
                    q.push(current->right);
            }
            double avg=sum/n;
            ans.push_back(avg);

        }
        return ans;
        
    }
};