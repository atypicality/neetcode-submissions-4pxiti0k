class Solution {
public:
    int numSquares(int n) {
        vector<int> OPT(n+1, 0);

        for(int i = 1; i <= n; ++i)
        {
            if(i*i <= n) OPT[i*i] = 1;
            if(OPT[i]==1) continue;
            else{
                int max = 10001;
                for(int j = 1; j * j < i; ++j)
                {
                    if(OPT[i-j*j] > 0 && OPT[i-j*j] < max) max = OPT[i-j*j] + 1;
                }
                OPT[i] = max;
            }
        }

        return OPT[n];
    }
};