class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> prefix(nums.size(), 1),suffix(nums.size(), 1);
        prefix[0] = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            if(prefix[i - 1] == 0)
                prefix[i] =  1 * nums[i];
            else
                prefix[i] =  prefix[i - 1] * nums[i];
        }

        suffix[nums.size() -1] = nums[nums.size() -1];
        for(int i = nums.size() -2; i > -1; i--)
        {
            if(suffix[i + 1] == 0)
                suffix[i] =  1 * nums[i];
            else
                suffix[i] =  suffix[i + 1] * nums[i];
        }

        int ans_one = *max_element(prefix.begin(),prefix.end());
        int ans_two = *max_element(suffix.begin(),suffix.end());

        return max(ans_one,ans_two);
    }
};