class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans = "";
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i]=='1') ans += '1';
        }
        ans[ans.size()-1] = '0';
        while(ans.size() != s.size())
        {
            ans = ans + '0';
        }
        ans[ans.size()-1] = '1';
        return ans;
    }
};