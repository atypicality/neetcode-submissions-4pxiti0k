class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        int max = heights[heights.size()-1];
        vector<int> ans;
        ans.push_back(heights.size()-1);
        for(int i = heights.size()-2; i >=0; --i)
        {
            if(heights[i] > max)
            {
                ans.push_back(i);
                max = heights[i];
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};