class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0], curr_sum = 0;
        int r = 0;

        while(r < nums.size())
        {
            curr_sum+=nums[r];

            if(curr_sum > sum)
            {
                sum = curr_sum;
            }
            if(curr_sum < 0) curr_sum = 0;
            r++;
        }

        return sum;
    }
};