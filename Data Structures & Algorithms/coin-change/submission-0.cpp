class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        std::vector<int>OPT(amount+1, 10001); 

        OPT[0] = 0;
       for(int j = 0; j < coins.size(); ++j)
        {
            if(amount >= coins[j]) OPT[coins[j]] = 1;
        }

       for(int i = 1; i <= amount; ++i)
       {
            for(int j = 0; j < coins.size(); ++j)
            {
                if(i - coins[j] >= 0 && OPT[i] != 1) 
                {
                    OPT[i] = std::min(OPT[i], 1 + OPT[i - coins[j]]);
                }  
            }
       }
       if(OPT[amount] == 10001) return -1;
       return OPT[amount];
    }
};
