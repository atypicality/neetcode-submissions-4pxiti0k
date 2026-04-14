class Solution {
public:
    int minDistance(string word1, string word2) {
        std::vector<std::vector<int>>OPT(word1.size()+1, std::vector<int>(word2.size()+1, 0));

        //initialize row/col
        for(int i = 0; i <= word1.size(); ++i)
            OPT[i][0] = i;
        
        for(int i = 0; i <= word2.size(); ++i)
            OPT[0][i] = i;

        for(int i = 1; i <= word1.size(); ++i)
        {
            for(int j = 1; j <= word2.size(); ++j)
            {
                if(word1[i-1]==word2[j-1])
                {
                    OPT[i][j] = OPT[i-1][j-1];
                }
                else
                {
                    OPT[i][j] = 1 + OPT[i-1][j-1];
                }
                
                OPT[i][j] = min(1 + OPT[i][j-1], OPT[i][j]);
                OPT[i][j] = min(1 + OPT[i-1][j], OPT[i][j]);

            }
        }
        return OPT[word1.size()][word2.size()];
    }
};
