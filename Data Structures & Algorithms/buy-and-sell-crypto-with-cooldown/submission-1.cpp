class Solution {
public:
    int maxProfit(vector<int>& prices) { 
        vector<vector<int>>OPT(prices.size(), std::vector<int>(3));
        if(prices.size()==1) return 0;

        OPT[0][0] = 0; //not holding stock
        OPT[0][1] = 0 - prices[0]; //have stock
        OPT[0][2] = 0; //cant have sold

        for(int i = 1; i < prices.size(); ++i)
        {
            OPT[i][0] = std::max(OPT[i-1][0], OPT[i-1][2]);
            OPT[i][1] = std::max(OPT[i-1][1], OPT[i-1][0] - prices[i]);
            OPT[i][2] = OPT[i-1][1] + prices[i];
        }

        int ans = std::max(OPT[prices.size()-1][0],OPT[prices.size()-1][1]);
        return std::max(ans, OPT[prices.size()-1][2]);
    }
};
