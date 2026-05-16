class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool seenLet = false;
        for(int i = s.size() - 1; i>=0; --i)
        {
            if(s[i]==' ' && seenLet == false) continue;
            else if(s[i]== ' ' && seenLet == true) break;
            else {
                ++count;
                seenLet = true;
            }
        }   
        return count;
    }
};