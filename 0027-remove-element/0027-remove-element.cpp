class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0)
        {
            return 0;
        }
        int idx = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(val != nums[i])
            {
                nums[idx] = nums[i];
                count++;
                idx++;
            }
            
        }


        return count;
    }
};