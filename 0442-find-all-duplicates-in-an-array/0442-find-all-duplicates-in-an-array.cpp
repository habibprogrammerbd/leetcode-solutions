class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mp;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        for(auto [x,y] : mp)
        {
            if(y >= 2)
            {
                ans.push_back(x);
            }
        }

        return ans;
    }
};