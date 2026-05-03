class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int a = 0;
        int b = 0;
        for(int i = 0; i < gas.size(); ++i)
        {
            a += gas[i];
            b += cost[i];
        }
        if(a < b) return -1;

        a = 0;
        b = 0;
        for(int i = 0; i < gas.size(); ++i)
        {   
            a += (gas[i] - cost[i]);
            if(a<0)
            {
                a = 0;
                b = i + 1;
            }
        }
        return b;
    }
};
