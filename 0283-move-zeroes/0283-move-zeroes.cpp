class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        for(int i = 0, j = i; i < nums.size() ; i++)
        {
            if(nums[i] != 0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }

        for(auto x : nums)
        {
            cout << x << " ";
        }
    }
};