class Solution {
public:
    string longestPalindrome(string s) {
        std::vector<std::vector<int>>OPT(s.size(), std::vector<int>(s.size()));
        string max;
        for(int i = 0; i < s.size(); ++i)
        {
            OPT[i][i] = 1;
            max = s[i];
        }

        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i]==s[i+1])
            {
                OPT[i][i+1] = 1;
                max = s.substr(i,2);
            }
        }

        for(int len = 3; len <= s.size(); ++len)
        {
            for(int i = 0; i <= s.size() - len; ++i)
            {
                int j = i + len - 1;
                if(s[i]==s[j] && OPT[i+1][j-1] == 1)
                {
                    OPT[i][j] = 1;
                    max = s.substr(i,len);
                }
            }
        }

        return max;
    }
};


