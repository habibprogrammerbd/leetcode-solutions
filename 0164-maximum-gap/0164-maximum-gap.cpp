class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() <= 1) return 0;

        sort(nums.begin(),nums.end());
        int count = 0;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            count = max(count, nums[i +1] - nums[i]);
        }

        return count;
    }
};