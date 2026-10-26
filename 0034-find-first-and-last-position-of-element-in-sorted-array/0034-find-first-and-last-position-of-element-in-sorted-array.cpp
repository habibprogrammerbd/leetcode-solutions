class Solution {
public:
    int binarySearch(vector<int>& nums, int target, bool findFirst) {
        int st = 0, end = nums.size() - 1, idx = -1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target) {
                idx = mid;
                if (findFirst) end = mid - 1;
                else st = mid + 1;
            }
            else if (nums[mid] < target) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        
        return idx;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = binarySearch(nums, target, true);
        int last = binarySearch(nums, target, false);

        return {first, last};
    }
};