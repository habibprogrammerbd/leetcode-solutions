class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        
        int number = 1, ans = 0;
       
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] >= 1)
            {
                if(nums[i] != number)
                {
                    ans = number;
                    break;
                }
                else
                {
                    number++;
                }
            }
        }

        ans = number;

        return number;
        
    }
};