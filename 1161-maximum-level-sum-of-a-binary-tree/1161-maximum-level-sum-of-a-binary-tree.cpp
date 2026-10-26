class Solution {
public:
     int bfs(TreeNode* root) {
        queue<TreeNode*> q;
        bool curr = false;
        vector<int> ans;
        int level = 1, final_ans = 0, curr_val = INT_MIN;
        if (root) q.push(root);

        while (!q.empty()) {
            int sz = q.size();

            for (int i = 0; i < sz; i++) {
                TreeNode* node = q.front();
                q.pop();
                ans.push_back(node->val);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            int val = accumulate(ans.begin(), ans.end(), 0);
            if(curr_val < val)
            {
                curr_val = val;
                final_ans = level;
            }
            ans.clear();
            level++;
        }
        return final_ans;
    }
    int maxLevelSum(TreeNode* root) {
        return bfs(root);
    }
};