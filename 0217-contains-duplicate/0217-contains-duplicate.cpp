class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        multiset<int> st;
        for(int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]);
        }
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(st.count(nums[i]) >= 2)
            {
                return true;
            }
        }
        return false;
    }
};