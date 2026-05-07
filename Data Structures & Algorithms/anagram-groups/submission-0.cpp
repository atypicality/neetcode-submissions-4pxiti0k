class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int, 26>, vector<string>> ans;
        for(int i = 0; i < strs.size(); ++i)
        {
            array <int, 26> opt = {0};
            for(int j = 0; j < strs[i].size(); ++j)
            {
                ++opt[strs[i][j] - 'a']; 
            }     
            ans[opt].push_back(strs[i]);
        }
        std::vector<vector<string>>ans2;

        for (const auto& [key, value] : ans) 
        {
            ans2.push_back(std::move(value));
        }   
        return ans2;
    }
};

