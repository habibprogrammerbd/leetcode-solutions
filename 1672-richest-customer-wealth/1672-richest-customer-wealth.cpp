class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int max_acc = 0;

        for(int i = 0; i < acc.size(); i++)
        {
            max_acc = max(max_acc,accumulate(acc[i].begin(),acc[i].end(),0));
        }

        return max_acc;
    }
};