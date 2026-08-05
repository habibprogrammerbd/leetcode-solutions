class Solution {
public:
    int sum = 0;
    int max_hight(TreeNode* root)
    {
        if(root == NULL) return 0;
        
        int l = max_hight(root->left);
        int r = max_hight(root->right);

        return max(l,r) +1;
    }
    int sum_leaves_values(TreeNode* root,int T)
    {
        int sum = 0;
        if(root == NULL) return NULL;
        queue<pair<TreeNode*,int>> q;
        if(root) q.push({root,1});
        while(!q.empty())
        {
            TreeNode* fast = q.front().first;
            int level = q.front().second;
            q.pop();
            if( T == level) sum += fast->val;

            if(fast->left) q.push({fast->left,level+1});
            if(fast->right) q.push({fast->right,level+1});
        }
        return sum;
    }
    int deepestLeavesSum(TreeNode* root) {
        int T = max_hight(root);
        return sum_leaves_values(root,T);
    }
};