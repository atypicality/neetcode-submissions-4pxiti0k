class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        std::vector<int>OPT(cost.size());

        OPT[0] = cost[0];
        OPT[1] = cost[1];

        for(int i = 2; i < cost.size(); i++)
        {
            OPT[i] = cost[i] + std::min(OPT[i-2], OPT[i-1]); 
        }
        return std::min(OPT[cost.size()-1], OPT[cost.size()-2]);
    }
};
