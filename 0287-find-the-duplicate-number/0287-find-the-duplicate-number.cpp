class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            int idx = abs(nums[i]);
            if(nums[idx - 1] < 0)
            {
                return idx;
            }
            else
            {
                nums[idx - 1] = nums[idx - 1] * -1;
            }
        }

        // for(int x : nums) cout << x << " ";
        return 0;
    }
};