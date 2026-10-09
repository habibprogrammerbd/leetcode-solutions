class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        map<int,int> mp;
        vector<int> ans;

        for(int i = 0; i < numbers.size(); i++)
        {
            mp[numbers[i]] = i+1;
        }

        for(int i = 0; i < numbers.size(); i++)
        {
            int x = target - numbers[i];

            if(mp.find(x) != mp.end())
            {
                ans.push_back(i +1);
                ans.push_back(mp.find(x)->second);
                break;
            }
        }
        return ans;
    }
};