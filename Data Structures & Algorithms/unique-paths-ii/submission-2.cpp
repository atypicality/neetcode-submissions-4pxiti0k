class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        vector<vector<int>> OPT(obstacleGrid.size(), vector<int>(obstacleGrid[0].size(), -1));
        if(obstacleGrid[0][0] != 1)OPT[0][0]=1;

        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        for (int i = 1; i < m; ++i) {
            OPT[i][0] = (obstacleGrid[i][0] == 0 && OPT[i-1][0] == 1) ? 1 : 0;
        }

        for (int j = 1; j < n; ++j) {
            OPT[0][j] = (obstacleGrid[0][j] == 0 && OPT[0][j-1] == 1) ? 1 : 0;
        }

        for(int i = 1; i < obstacleGrid.size(); ++i)
        {
            for(int j = 1; j < obstacleGrid[0].size(); ++j)
            {
                if(obstacleGrid[i][j] == 1)
                {
                    OPT[i][j] = -1;
                } else {
                int left = OPT[i][j-1];
                int top = OPT[i-1][j];
                if(left!=-1 && top != -1) OPT[i][j] = OPT[i][j-1] +  OPT[i-1][j];
                else if(top!=-1) OPT[i][j] = OPT[i-1][j];
                else if(left!=-1) OPT[i][j] = OPT[i][j-1];
                }
            }
        }
        if(OPT[obstacleGrid.size()-1][obstacleGrid[0].size()-1] == -1) return 0;
        return OPT[obstacleGrid.size()-1][obstacleGrid[0].size()-1];
    }
};