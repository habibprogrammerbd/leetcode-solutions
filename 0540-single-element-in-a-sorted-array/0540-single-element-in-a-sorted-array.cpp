class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];

        int left = 1,right = n -2, ans = 0;

        while(left <= right)
        {
            int mid = (left + right) /2; 

            if(nums[mid -1] != nums[mid] && nums[mid] != nums[mid +1])
            {
                ans = nums[mid];
                break;
            }

            if(nums[mid -1] == nums[mid])
            {
                if((mid -1) % 2 == 0){
                    left = mid +1;
                }else{
                    right = mid -1;
                }
            }
            else if(nums[mid] == nums[mid +1])
            {
                if((mid +1) % 2 == 0){
                    right = mid -1;
                }else{
                    left = mid +1;
                }
            }
        }

        return ans;
    }
};