class Solution {
public:
    void dfs(TreeNode* node, int depth, vector<int>& ans)
    {
        if(node == NULL) return;

        if(ans.size() == depth)
        {
            ans.push_back(node->val);
        }
        
        dfs(node->right,depth +1, ans);
        dfs(node->left, depth +1, ans);
       
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        dfs(root,0, ans);
        return ans;
    }
};