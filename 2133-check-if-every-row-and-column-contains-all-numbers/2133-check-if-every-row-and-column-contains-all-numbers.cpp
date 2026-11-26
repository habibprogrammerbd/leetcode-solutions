class Solution {
public:
    bool checkValid(vector<vector<int>>& mat) {
        unordered_map<int, int> mp;
        int x = mat[0].size();
        for(int i = 1; i <= x; i++)
            mp[i]++;

        for(int i = 0; i < x; i++)
        {
            unordered_map<int,int> mp1;
            unordered_map<int,int> mp2;
            for(int j = 0; j < x; j++)
            {
                int val = mat[i][j];
                mp1[val]++;
            }

            for(int j = 0; j < x; j++)
            {
                int val = mat[j][i];
                mp2[val]++;
            }

            if((mp != mp1) || (mp != mp2))
            {
                return false;
            }

            mp1.clear();
            mp2.clear();
        }  

        return true;  
    }
};