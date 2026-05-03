class Solution {
public:
    int countSubstrings(string s) {

        std::vector<int>OPT(s.size(), 1);
        int ans = 0;
        for(int i = 0; i < s.size(); ++i)
        {
            //odd
            int left = i;
            int right = i;
            while(left >= 0 && right <= s.size())
            {
                if(s[left]==s[right])++ans;
                else {
                    break;
                }
                --left;
                ++right;
            }
        }

        for(int i = 0; i < s.size()-1; ++i)
        {
            //even
            int left = i;
            int right = i+1;
            while(left >= 0 && right <= s.size())
            {
                if(s[left]==s[right])++ans;
                else {
                    break;
                }
                --left;
                ++right;
            }

        }
        return ans;
    }
};
