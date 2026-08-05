class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL) return {};
        vector<vector<int>> ans;

        queue<TreeNode*> q;
        if(root) q.push(root);
        while(!q.empty())
        {
            int sz = q.size();
            vector<int> v;
            for(int i = 0; i < sz ; i++)
            {
                TreeNode* fast = q.front();
                q.pop();

                v.push_back(fast->val);

                if(fast->left) q.push(fast->left);
                if(fast->right) q.push(fast->right);
            }
            ans.push_back(v);
        }
        return ans;
    }
};