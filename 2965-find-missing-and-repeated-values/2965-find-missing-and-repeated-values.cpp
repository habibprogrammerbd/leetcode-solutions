class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a = 0, b = 0;
        map<int,int> mp;

        for(int i = 0; i < grid.size(); i++)
        {
            for(auto x : grid[i])
            {
                mp[x]++;
            }
        }

        for(int i = 1; i <= grid.size() * grid.size(); i++)
        {
            if(mp.find(i) != mp.end() && mp.find(i)->second >= 2) a = i;
            else if(mp.find(i) == mp.end()) b = i;
        }

        return{a,b};
        
    }
};