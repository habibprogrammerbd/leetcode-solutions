class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;
        int sum = targetSum - root->val;

        if(root->left == NULL && root->right == NULL)
        {
            if(sum == 0) return true;
            else return false;
        }
        bool r = hasPathSum(root->left,sum);
        bool l = hasPathSum(root->right,sum);
        return r || l;
    }
};