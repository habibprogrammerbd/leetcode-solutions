class Solution {
public:
    void bfs(TreeNode* root, vector<vector<int>>& ans) {
        queue<TreeNode*> q;
        vector<int> level;
        if (root) q.push(root);

        while (!q.empty()) {
            int sz = q.size();

            for (int i = 0; i < sz; i++) {
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->val);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            ans.push_back(level);
            level.clear();
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        bfs(root, ans);
        return ans;
    }
};