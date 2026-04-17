class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int curr = 0;

        for(int i = 1; i < prices.size(); ++i)
        {
            curr = std::max(0,curr + prices[i]-prices[i-1]);
            if(curr > max) max = curr;
        }
        return max;
    }
};
