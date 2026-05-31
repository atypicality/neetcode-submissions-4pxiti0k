class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        int idx = 0;
        int smallestSize = 201;
        for(int i = 0; i < strs.size(); ++i)
        {
            if(strs[i].size() < smallestSize) smallestSize = strs[i].size();
        }

        bool isVal = true;
        while(true)
        {
            if(idx > smallestSize) break;
            for(int i = 1; i < strs.size(); ++i)
            {
                if(strs[0][idx] != strs[i][idx]) 
                { 
                    isVal = false;
                    break;
                }
            }
            if(!isVal) break;
            ++idx;
        }
        return strs[0].substr(0,idx);
    }
};