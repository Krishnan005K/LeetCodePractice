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
    int findHeight(TreeNode*root)
    {
        queue<TreeNode*>q;
        int height=-1;
        q.push(root);
        while(!q.empty())
        {
            height++;
            int s=q.size();
            while(s--)
            {
                TreeNode* current=q.front();
                q.pop();
                if(current->left)
                    q.push(current->left);
                if(current->right)
                    q.push(current->right);
            }
        }
        return height;

    }
    void print(TreeNode* root,vector<vector<string>> & ans,int i,int j,int h)
    {
        if(!root)
            return ;
        ans[i][j]=to_string(root->val);
        int factor=pow(2,h-i-1);
        int lCol=(j-factor);
        int rCol=(j+factor);
        print(root->left,ans,i+1,lCol,h);
        print(root->right,ans,i+1,rCol,h);
    }
    vector<vector<string>> printTree(TreeNode* root) {
        int height=findHeight(root);
        int n=height+1;
        int m=pow(2,n)-1;
        vector<vector<string>>ans(n,vector<string>(m,""));

        print(root,ans,0,(m-1)/2,height);
        return ans;

    }
};