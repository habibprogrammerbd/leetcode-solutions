class Solution {
public:
    bool isValid(vector<int>& num, int mid, int k)
    {
        int std = 1, sum = 0;
        for(int i = 0; i < num.size(); i++)
        {
            if(num[i] > mid) return false;

            if(sum + num[i] <= mid)
            {
                sum+=num[i];
            }
            else
            {
                std++;
                sum = num[i];
            }
        }

        return std <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int st = *max_element(nums.begin(),nums.end()), end = accumulate(nums.begin(),nums.end(),0), ans = end;

        while(st <= end)
        {
            int mid = st + (end - st) / 2;

            if(isValid(nums, mid, k))
            {
                ans = mid;
                end = mid -1;
            }
            else st = mid +1;
        }

        return ans;
    }
};