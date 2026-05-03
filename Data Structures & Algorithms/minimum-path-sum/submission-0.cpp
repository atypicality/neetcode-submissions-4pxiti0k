class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> OPT(grid.size(), vector<int>(grid[0].size(), 0));
        int edge = 0;
        for(int i = 0; i < grid.size(); ++i)
        {
            edge += grid[i][0];
            OPT[i][0] = edge;
        }

        edge = 0;
        for(int i = 0; i < grid[0].size(); ++i)
        {
            edge += grid[0][i];
            OPT[0][i] = edge;
        }

        for(int i = 1; i < grid.size(); ++i)
        {
            for(int j = 1; j < grid[0].size(); ++j)
            {
               OPT[i][j] = grid[i][j] + min(OPT[i-1][j], OPT[i][j-1]);
            }
        }
        return OPT[grid.size()-1][grid[0].size()-1];
    }
};