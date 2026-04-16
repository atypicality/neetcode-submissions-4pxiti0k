class Solution {
public:
    bool isAnagram(string s, string t) {
       int size = s.size();
       if(size!= t.size()) return false;

       unordered_map<char, int> um;
       unordered_map<char, int> um2;

       for(int i = 0; i < size; ++i)
       {
            um[s[i]]++;
            um2[t[i]]++;
       }

       for(int i = 0; i < size; ++i)
       {
            if(um[s[i]]!=um2[s[i]]) return false;
       }

        return true;
       
    }
};
