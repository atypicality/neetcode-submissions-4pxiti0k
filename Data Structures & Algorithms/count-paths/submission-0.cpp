class Solution {
public:
    int uniquePaths(int m, int n) {
        std::vector<std::vector<int>> OPT(m, std::vector<int>(n, 0));  

        //initialize first row and first column
        for(int i = 0; i < m; ++i)
        {
            OPT[i][0] = 1;
        }

        for(int i = 0; i < n; ++i)
        {
            OPT[0][i] = 1;
        }

        for(int i = 1; i < m; ++i)
        {
            for(int j = 1; j < n; ++j)
            {
                OPT[i][j] = OPT[i-1][j] + OPT[i][j-1];
            }
        }  
        return OPT[m-1][n-1];
    }
};
