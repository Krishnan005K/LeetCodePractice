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
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         if(!root)
//             return root;
//         if(root->val == key)
//         {
//             cout<<"FF";
//             if(root->right)
//             {
//                 root->val=root->right->val;
//                 if(!root->right->right && !root->right->left)
//                     root->right=NULL;

//                 cout<<"Fif";
//             }
//             else if(root->left)
//             {
//                 root->val=root->left->val;
//                 root->left= NULL;
                
//             }
//             else
//                 root=NULL;

//         }
//         if(root==NULL)
//             return root;
//         deleteNode(root->left,key);
//         deleteNode(root->right,key);
//         return root;
//     }
// };

class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return root; // Base case: empty tree or key not found

        if (root->val == key) {
            if (root->right) {
                TreeNode* temp = root->right;
                while (temp->left) temp = temp->left; // Find inorder successor
                root->val = temp->val; // Copy value
                root->right = deleteNode(root->right, temp->val); // Delete successor
            }
            else if (root->left) {
                TreeNode* temp = root->left;
                while (temp->right) temp = temp->right; // Find inorder predecessor
                root->val = temp->val; // Copy value
                root->left = deleteNode(root->left, temp->val); // Delete predecessor
            }
            else {
                delete root;
                return nullptr;
            }
        } 
        else if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } 
        else {
            root->right = deleteNode(root->right, key);
        }

        return root;
    }
};
