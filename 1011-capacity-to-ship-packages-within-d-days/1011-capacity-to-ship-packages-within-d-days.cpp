class Solution {
public:
    int isValid(vector<int>& we, int mid)
    {
        int dy = 1, sum = 0;
        for(int i = 0; i < we.size(); i++)
        {
            if(sum + we[i] <= mid)
            {
                sum+=we[i];
            }
            else
            {
                dy++;
                sum = we[i];
            }
        }

        return dy;
    }
    int shipWithinDays(vector<int>& we, int day) {
        int st = *max_element(we.begin(),we.end()), end = accumulate(we.begin(),we.end(), 0), ans = 0;

        while(st <= end)
        {
            int mid = (st+end)/2;

            if(isValid(we, mid) <= day)
            {
                ans = mid;
                end = mid-1;
            }
            else st = mid +1;
        }

        return ans;
    }
};