class Solution {
public:
    void Iraversal(TreeNode* root,vector<int>& ans)
    {
        
        if (root == NULL) return ;

        Iraversal(root->left,ans);
        ans.push_back(root->val);
        Iraversal(root->right,ans);

    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        Iraversal(root,ans);
        return ans;
    }
};