class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> prefix(nums.size(), 1), ans;

        for(int i = 1; i < nums.size(); i++)
        {
            prefix[i] = prefix[i - 1] * nums[i -1];
        }

        int suffix = 1;
        
        for(int i = nums.size() -2; i >= -1; i--)
        {
            ans.push_back(prefix[i +1] * suffix);
            suffix = suffix * nums[i +1];
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};