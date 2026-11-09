class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l = 0, r = 0;
        set<pair<int,int>> pr;
        vector<int> ans;

        while(r < nums.size())
        {
            pr.insert({nums[r],r});

            if(r - l +1 == k)
            {
                pair<int,int> max_val = *pr.rbegin();
                ans.push_back(max_val.first);
                pr.erase({nums[l],l});
                l++;
            }
            r++;
        }
        return ans;
    }
};