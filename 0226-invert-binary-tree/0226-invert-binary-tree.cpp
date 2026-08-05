class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return root;

        TreeNode* tmp = root->left;
        root->left = root->right;
        root->right = tmp;

        TreeNode* l = invertTree(root->left);
        TreeNode* r = invertTree(root->right);

        return root;
    }
};