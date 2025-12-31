// https://leetcode.com/problems/magic-squares-in-grid/description/?envType=daily-question&envId=2025-12-30

class Solution {
public:
    bool check(int r, int c, vector<vector<int>>& grid)
    {
        set<int> unique;
        for(int i = r ; i < r + 3; i++)
        {
            if(grid[i][c] + grid[i][c + 1] + grid[i][c + 2] != 15)
                return false;

            for(int j = c ; j < c + 3; j++)
            {
                if(i == 0 && grid[r][j] + grid[r  + 1][j] + grid[r + 2][j] != 15)
                    return false;
                if(grid[i][j] < 1 || grid[i][j] > 9)
                    return false;
                unique.insert(grid[i][j]);
            }
        }
        if(unique.size() != 9 || 
            grid[r][c] + grid[r + 1][c + 1] + grid[r + 2][c + 2] != 15 ||
            grid[r][c + 2] + grid[r + 1][c + 1] + grid[r + 2][c] != 15)
            return false;
        
        return true;

    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int magic = 0;
        int n = grid.size();
        int n1 = grid[0].size();


        for(int i = 0; i < n - 2; i++)
        {
            for(int j = 0 ; j < n1 - 2; j++)
            {
                if(check(i, j, grid)){
                    magic += 1;
                }
            }
        }
        return magic;
    }
};
