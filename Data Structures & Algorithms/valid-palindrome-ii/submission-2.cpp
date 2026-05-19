class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                bool isValid = true;
                if(s[l]==s[r-1])
                {
                    int a = l;
                    int b = r-1;
                    while(a < b)
                    {
                        if(s[a]==s[b])
                        {
                            ++a;
                            --b;
                        } else
                        {
                            isValid = false;
                            break;
                        }
                    }
                    
                    if(isValid) break;
                }

                isValid = true;
                if(s[l+1]==s[r])
                {
                    int a = l+1;
                    int b = r;
                    while(a < b)
                    {
                        if(s[a]==s[b])
                        {
                            ++a;
                            --b;
                        } else
                        {
                            isValid = false;
                            break;
                        }
                    }
                    if(isValid) break;
               }
               return false;
            } else
            {
                ++l;
                --r;
            }
        }
        return true;
    }
};