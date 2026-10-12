class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++)
        {
            int set = abs(nums[i]);

            if(nums[set -1] < 0 ) 
            {
                ans.push_back(set);
            }
            else
            {
                nums[set - 1] = - nums[set - 1];
            }
        }

        return ans;
    }
};