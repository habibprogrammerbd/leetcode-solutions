class Solution {
public:
    void sortColors(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);


        int low = 0, mid = 0, hight = nums.size() -1;

        while(mid <= hight)
        {
            if(nums[mid] == 0)
            {
                swap(nums[low],nums[mid]);
                low++,mid++;
            }
            else if(nums[mid] == 1) mid++;
            else
            {
                swap(nums[mid],nums[hight]);
                hight--;
            }
        }
    }
};