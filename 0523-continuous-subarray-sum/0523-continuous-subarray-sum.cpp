class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size(), sum = 0;
        map<int,int> mp;
        mp[0] = -1;
        
        for(int i = 0; i < n; i++)
        {
            sum+=nums[i];
            int curr = sum % k;

            if(mp.find(curr) != mp.end())
            {
                int ans = i - mp.find(curr)->second;
                if(ans >= 2) return true;
            }
            else
                mp[curr] = i;
        }

        return false;
    }
};