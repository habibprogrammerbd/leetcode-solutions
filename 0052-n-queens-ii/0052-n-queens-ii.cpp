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
    int nQueens(vector<string> &bord, int row, int n)
    {
        if(row == n)
        {
            return 1;
        }
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(isSafe(bord, row, i, n))
            {
                bord[row][i] = 'Q';
                count+=nQueens(bord, row+1, n);
                bord[row][i] = '.';
            }
        }
        
        return count;
    }
    int totalNQueens(int n) {
        vector<string> bord(n,string(n,'.'));

        return nQueens(bord, 0, n);
    }
};