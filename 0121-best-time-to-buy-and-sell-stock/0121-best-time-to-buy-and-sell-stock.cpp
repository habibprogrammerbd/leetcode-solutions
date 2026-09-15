class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);


        int min_val = prices[0];
        int max_val = 0;
        int ans = 0;

        for(int i = 0; i < prices.size(); i++)
        {
            if(min_val > prices[i])
            {
                min_val = prices[i];
                max_val = min_val;
            }

            if(max_val < prices[i])
            {
                max_val = prices[i];
            }

            ans = max(ans,max_val - min_val);

        }
        return ans;
    }
};