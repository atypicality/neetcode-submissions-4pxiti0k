class Solution {
public:
    bool isValid(string s) {
        stack<char> ans;
        for(int i = 0; i < s.size(); ++i)
        {
            if(ans.size() > 0 && (ans.top()=='(' && s[i] == ')'
            || ans.top()=='{' && s[i] == '}'
            || ans.top()=='[' && s[i] == ']')
            )
            {
                ans.pop();
            }
            else
            {
                ans.push(s[i]);
            }
        }
        if(ans.empty()) return true;
        return false;
    }
};
