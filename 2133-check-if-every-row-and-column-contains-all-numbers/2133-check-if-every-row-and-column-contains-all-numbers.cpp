class Solution {
public:
    bool checkValid(vector<vector<int>>& mat) {
       
        int sz = mat[0].size();

        for(int i = 0; i < sz; i++)
        {
            vector<bool> find_one(sz, false);
            vector<bool> find_two(sz, false);
            for(int j = 0; j < sz; j++)
            {
                int val = mat[i][j];
                find_one[val -1] = true;
            }

            for(int j = 0; j < sz; j++)
            {
                int val = mat[j][i];
                find_two[val -1] = true;
            }

            for(int k = 0; k < sz; k++)
            {
                if((find_one[k] == false) || (find_two[k] == false)) return false;
            }
        }  

        return true;  
    }
};