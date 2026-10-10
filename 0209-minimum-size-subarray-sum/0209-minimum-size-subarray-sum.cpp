class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = 1e9, frist = 0, sec = 0,sum = 0;
        bool x = false;

        while(sec < nums.size())
        {
            sum += nums[sec];
            
            if(sum >= target)
            {
                ans = min(ans, sec - frist +1);
                x = true;
                while(sum >= target && frist <= sec)
                {
                    ans = min(ans, sec - frist +1);
                    sum-= nums[frist];
                    frist++;
                }
            }
            sec++;
        }
        cout << ans << endl;

        if(x == true) return ans;
        else return 0;

    }
};