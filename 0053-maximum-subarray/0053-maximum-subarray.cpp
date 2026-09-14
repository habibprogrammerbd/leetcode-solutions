class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if(nums.size()== 1)
        {
            return nums[0];
        }

        int final_ans = nums[0];
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            ans = ans + nums[i];
            final_ans = max(ans,final_ans);

            if(ans < 0 )
            {
                ans = 0;
            }
            
        }

        return final_ans;
    }
};