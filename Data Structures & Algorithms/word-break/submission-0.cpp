class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        std::vector<bool> OPT(s.size() + 1, false);
        int maxLen = 0;
        for (const auto& a : wordDict) {
            if (a.size() > maxLen) {
                maxLen = a.size();
            }
        }

        OPT[0] = true;
        for(int i = 1; i <= s.size(); ++i)
        {
            for(int j = 1; i - j >= 0 && j <= maxLen; ++j)
            {
                if(OPT[i]) break;
                for(int k = 0; k < wordDict.size(); ++k)
                {
                    if(OPT[i-j] && s.substr(i-j,j) == wordDict[k]) 
                    {
                        OPT[i] = true;
                        break;
                    }
                }
            }
            std::cout << i << " " << OPT[i] << std::endl;
        }

        return OPT[s.size()];
    }
};
