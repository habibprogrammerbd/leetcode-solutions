class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int sz = nums.size();

        for(int i = 0,j = i  ; j < sz; j++)
        {
            if(nums[j] != 0 )
            {
                swap(nums[i], nums[j]);
                i++;
            }
        }

    }
};