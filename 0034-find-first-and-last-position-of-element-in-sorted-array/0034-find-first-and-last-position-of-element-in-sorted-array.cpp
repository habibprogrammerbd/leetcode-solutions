class Solution {
public:
    int idxSearch(vector<int>& nums, int val, bool curr)
    {
        int st = 0, end = nums.size() -1, idx = -1;
    
        while(st <= end)
        {
            int mid = st + (end - st) /2;

            if(nums[mid] == val)
            {
                idx = mid;
                if(curr) end = mid - 1;
                else st = mid + 1;   
            }
            else if(nums[mid] < val)
            {
                st = mid + 1;
            }
            else end = mid - 1;
        }
        return idx;

    }
    vector<int> searchRange(vector<int>& nums, int val) {

        int frist = idxSearch(nums, val, true);
        int last = idxSearch(nums, val, false);

        return {frist, last};
    }
};