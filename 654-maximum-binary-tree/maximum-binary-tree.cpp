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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return Construct(nums,0,nums.size()-1);
    }
    TreeNode* Construct(vector<int>nums,int start,int end)
    {
        if(start>end)
            return NULL;
        int index=-1,val=-1;
        for(int i=start;i<=end;i++)
        {
            if(nums[i]>val)
            {
                index=i;
                val=nums[i];
            }
        }
        TreeNode *root=new TreeNode(val);
        root->left=Construct(nums,start,index-1);
        root->right=Construct(nums,index+1,end);
        return root;

    }
};