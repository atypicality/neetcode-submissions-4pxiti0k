class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        std::vector<int> OPT(2, 0);
        for(int i = 0; i < bills.size(); ++i)
        {
            if(bills[i]==5) 
            {
                ++OPT[0];
            }
            if(bills[i]==10)
            {
                if(OPT[0]!=0)
                {
                    --OPT[0];
                    ++OPT[1];
                } else
                {
                    return false;
                }
            }
            if(bills[i]==20)
            {
                if(OPT[1]!=0 && OPT[0] !=0)
                {
                    --OPT[1];
                    --OPT[0];
                    continue;
                }

                if(OPT[0]>=3)
                {
                    OPT[0] = OPT[0]-3;
                    continue;
                }

                return false;
            }
    
        }
        return true;
    }
};