class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        if(nums.size() == 0) return 0;

        set<int> st;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]);
        }
        
        for(auto x : st)
        {
            ans.push_back(x);
            st.erase(x);
        }

        sort(nums.begin(),nums.end());

        int x = ans[0];
        int ans_count = 0;
        int count = 0;

        for(int i = 0; i < ans.size(); i++)
        {
            if(ans[i] == x)
            {
                count++;
                x++;
            }
            else
            {
                x = ans[i];
                count = 1;
                x++;
            }

            if(ans_count < count)
            {
                ans_count = count;
            }
        }

        return ans_count;
    }
};