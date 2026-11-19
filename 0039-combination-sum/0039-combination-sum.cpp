class Solution {
public:
    set<vector<int>> st;
    void getAllcom(int idx, vector<vector<int>>& ans, vector<int>& curr , int tar, vector<int>& can)
    {
        if(can.size() == idx || tar < 0)
        {
            return;
        }

        if(tar == 0)
        {
            if(st.find(curr) == st.end())
            {
                ans.push_back(curr);
                st.insert(curr);
            }
        }

        curr.push_back(can[idx]);

        getAllcom(idx +1, ans, curr, tar - can[idx], can);
        getAllcom(idx, ans, curr, tar - can[idx], can);

        curr.pop_back();
        getAllcom(idx +1, ans, curr, tar, can);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;

        getAllcom(0, ans, curr, target, candidates);

        return ans;
    }
};