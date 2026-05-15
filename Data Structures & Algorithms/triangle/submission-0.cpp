class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if(triangle.size()==1) return triangle[0][0];
        vector<int> OPT = triangle[triangle.size()-1];
        for(int i = triangle.size()-2; i>=0; --i)
        {
            std::vector<int> temp = triangle[i];
            for(int j = 0; j < temp.size(); ++j)
            {
                temp[j] = temp[j] + min(OPT[j], OPT[j+1]);
            }
            OPT = temp;
        }
        return OPT[0];
    }
};