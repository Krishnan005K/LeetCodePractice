// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> rightSideView(TreeNode* root) {
//         vector<int>ans;;
//         if(root==NULL)
//             return {};

//         queue<TreeNode*>q;
//         q.push(root);
//         while(!q.empty())
//         {
//             int s=q.size();
//             for(int i=1;i<=s;i++)
//             {
//                 TreeNode* curr=q.front();
//                 if(i==1)
//                     ans.push_back(curr->val);
//                 q.pop();
//                 if(curr->right)
//                     q.push(curr->right);
//                 if(curr->left)
//                     q.push(curr->left);
//             }
//         }
//         return ans;
//     }
// };



class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        rightView(root, result, 0);
        return result;
    }
    
    void rightView(TreeNode* curr, vector<int>& result, int currDepth) {
        if (!curr) return;
        if (currDepth == result.size()) result.push_back(curr->val);
        rightView(curr->right, result, currDepth + 1);
        rightView(curr->left, result, currDepth + 1);
    }
};