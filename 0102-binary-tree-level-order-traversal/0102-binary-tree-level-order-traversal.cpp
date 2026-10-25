
class Solution {
public:
    void level_Order(TreeNode* root, vector<vector<int>>& ans)
    {
        queue<TreeNode*> q;
        vector<int> val;
        if(root) q.push(root);

        while(!q.empty())
        {
            int sz = q.size();

            for(int i = 0; i < sz; i++)
            {
                TreeNode* frist = q.front();
                q.pop();
                val.push_back(frist->val);

                if(frist->left) q.push(frist->left);
                if(frist->right) q.push(frist->right);
            }
            ans.push_back(val);
            val.clear();
        }

    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        level_Order(root, ans);
        return ans;
    }
};