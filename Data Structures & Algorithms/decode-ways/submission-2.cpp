class Solution {
public:
    int numDecodings(string s) {
       std::vector<int> OPT(s.size() + 1, 0);
       if(s[0]=='0') return 0;
       OPT[0] = 1;
       OPT[1] = 1;

       for(int i = 2; i <= s.size(); ++i)
       {
            int a = s[i-2] - '0';
            int b = s[i-1] - '0';
            if (b != 0) {
                OPT[i] += OPT[i-1];
            }
            int combined = a * 10 + b;
            if (combined >= 10 && combined <= 26) 
            {
                OPT[i] += OPT[i-2];
            }
            if (OPT[i] == 0) return 0;
       } 

       return OPT[s.size()];
    }
};
