class Solution {
public:
    void getAllcom(int idx, vector<vector<int>>& ans, vector<int>& curr, int tar, vector<int>& can)
    {
        if (tar == 0)
        {
            ans.push_back(curr);
            return;
        }

        for (int i = idx; i < can.size(); i++)
        {
            if (i > idx && can[i] == can[i - 1]) continue; 
            if (can[i] > tar) break;                      

            curr.push_back(can[i]);
            getAllcom(i + 1, ans, curr, tar - can[i], can); 
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        getAllcom(0, ans, curr, target, candidates);
        return ans;
    }
};