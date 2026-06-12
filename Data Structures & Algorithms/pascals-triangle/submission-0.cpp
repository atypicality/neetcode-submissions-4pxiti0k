class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        std::vector<vector<int>> ans;
        ans.push_back({1});
        
        for(int i = 1; i<numRows; ++i)
        {
            std::vector<int> test(i + 1, 0);
            test[0] = 1;
            test[i] = 1;
            for(int j = 1; j <= i-1; ++j)
            {
                test[j] = ans[i-1][j-1] + ans[i-1][j]; 
            }
            ans.push_back(test);
        }
        return ans;
    }
};