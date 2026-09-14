class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            mp[nums[i]] = i;
        }
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int x = target - nums[i];
            
            auto it = mp.find(x);

            if(it != mp.end() && it->second != i)
            {
                ans.push_back(it->second);
                ans.push_back(i);
                break;
            }
        }
        return ans ;
    }
};