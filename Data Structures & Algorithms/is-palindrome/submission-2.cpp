class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        while(start < end)
        {
            while(start < end && std::isalpha(s[start])==false && std::isdigit(s[start])==false ) ++start;
            while(start < end && std::isalpha(s[end])==false && std::isdigit(s[end])==false) --end;

            if(start < end && std::tolower(s[start])!=std::tolower(s[end])) return false;
            ++start;
            --end;
        }
        return true;
    }
};
