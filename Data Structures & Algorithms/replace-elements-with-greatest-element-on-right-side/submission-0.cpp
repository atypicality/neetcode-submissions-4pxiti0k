class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        int max = arr[arr.size()-1];
        ans.push_back(-1);
        for(int i = arr.size()-2; i>=0; --i)
        {
            ans.push_back(max);
            if(arr[i] > max)
            {
                max = arr[i];
            }   
        }
        sort(ans.rbegin(), ans.rend());
        return ans;
    }
};