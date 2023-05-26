class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int h=0;
        int ld=maxDepth(root->left);
        int rd=maxDepth(root->right);

        return h=max(h, max(ld, rd))+1;
    }
};
