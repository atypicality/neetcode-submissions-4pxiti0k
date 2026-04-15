class Solution {
public:
    int maxCoins(vector<int>& nums) {
        vector<vector<int>> dp(nums.size(), vector<int>(nums.size(), 0));

        for (int len = 1; len <= nums.size(); len++) 
        {
            for (int i = 0; i + len - 1 < nums.size(); i++) 
            {
                int j = i + len - 1;

                for (int k = i; k <= j; k++) 
                {
                    int left = (i == 0) ? 1 : nums[i - 1];
                    int right = (j == nums.size() - 1) ? 1 : nums[j + 1];

                    int gain = left * nums[k] * right;

                    int leftPart = (k > i) ? dp[i][k - 1] : 0;
                    int rightPart = (k < j) ? dp[k + 1][j] : 0;

                    dp[i][j] = max(dp[i][j], leftPart + gain + rightPart);
                }
            }
        }

        return dp[0][nums.size() - 1];    

    } 
};
