class Solution {
public:
    int mx;
    int diameter(TreeNode* root)
    {
        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL) return 1;

        int l = diameter(root-> left);
        int r = diameter(root->right);

        int d = l+r;
        mx = max(d,mx);
        return max(l,r) +1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        mx = 0;
        int h = diameter(root);
        return mx;
    }
};