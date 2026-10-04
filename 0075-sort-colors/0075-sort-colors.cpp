class Solution {
public:
    void sortColors(vector<int>& nums) {

        for(int i = 0; i < nums.size(); i++)
        {
            for(int k = i + 1; k < nums.size(); k++)
            {
                if(nums[i] > nums[k])
                {
                    swap(nums[i],nums[k]);
                }
            }
        
        }

        for(int x : nums)
        {
            cout << x << " " ;
        }

    }
};