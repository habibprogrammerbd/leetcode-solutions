class Solution {
public:
    bool isSafe(vector<string> &bord, int row, int col, int n)
    {
        for(int i = col; i >= 0; i--)
        {
            if(bord[row][i] == 'Q')
                return false;
        }

        for(int i = row; i >= 0; i--)
        {
            if(bord[i][col] == 'Q')
                return false;
        }

        for(int i = row, j = col; i >= 0 && j >= 0; i--,j--)
        {
            if(bord[i][j] == 'Q')
                return false;
        }

        for(int i = row, j = col; i >= 0 && j < n; i--,j++)
        {
            if(bord[i][j] == 'Q')
                return false;
        }

        return true;
    }
    void nQueens(vector<string> &bord, vector<vector<string>> &ans, int row, int n)
    {
        if(row == n)
        {
            ans.push_back(bord);
            return;
        }

        for(int i = 0; i < n; i++)
        {
            if(isSafe(bord, row, i, n))
            {
                bord[row][i] = 'Q';
                nQueens(bord, ans, row+1, n);
                bord[row][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> bord(n,string(n, '.'));
        vector<vector<string>> ans;
        nQueens(bord, ans, 0, n);
        
        return ans;
    }
};