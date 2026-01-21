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
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
    
        int ld = minDepth(root->left);
        int rd = minDepth(root->right);
    
        if (root->left == NULL && root->right == NULL) {
            return 1; 
        }
        else if (root->left == NULL) {
            return rd + 1;
        }
        else if (root->right == NULL) {
            return ld + 1;
        }
        else {
           return min(ld, rd) + 1;
        }
    }
};