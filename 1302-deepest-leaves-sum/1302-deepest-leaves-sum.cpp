class Solution {
public:
    int max_hight(TreeNode* root)
    {
        if(root == NULL) return 0;
        
        int l = max_hight(root->left);
        int r = max_hight(root->right);

        return max(l,r) +1;
    }
    void sum_leaves_values(TreeNode* root, int cur, int &sum, int hight)
    {
        if(!root) return ;
        if(cur == hight)
        {
            sum += root->val;
            return ;
        }

        sum_leaves_values(root->left, cur+1, sum, hight);
        sum_leaves_values(root->right, cur+1, sum, hight);
    }


    int deepestLeavesSum(TreeNode* root) {
        int T = max_hight(root);
        int sum = 0;
        sum_leaves_values(root,1,sum,T);
        return sum;
    }
};

