class Solution {
public:
    void sortColors(vector<int>& nums) {
        int x = 0,y = 0, z = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0) x++;
            else if(nums[i] == 1) y++;
            else z++;
        }

        for(int i = 0; i < x; i++)
        {
            nums[i] = 0;
        }
        for(int i = x; i < x+y; i++)
        {
            nums[i] = 1;
        }
        for(int i = x + y ; i < nums.size(); i++)
        {
            nums[i] = 2;
        }


        for(auto x : nums)
        {
            cout << x << " ";
        }
        

    }
};