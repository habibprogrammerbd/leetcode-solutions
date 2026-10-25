class Solution {
public:
    void dfs(TreeNode* root,vector<int>& ans,int depth)
    {
        if(root == NULL) return;

        if(ans.size() == depth)
        {
            ans.push_back(root->val);
        }
        
        dfs(root->right,ans,depth +1);
        dfs(root->left, ans,depth +1);
       
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        dfs(root, ans, 0);
        return ans;
    }
};