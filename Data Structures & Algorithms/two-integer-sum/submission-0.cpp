class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>OPT;
        std::vector<int>ans;

        for(int i = 0; i < nums.size(); ++i)
        {
            if(OPT.contains(target-nums[i]))
            {
                ans.push_back(OPT[target-nums[i]]);
                ans.push_back(i);
                break;
            } 
            OPT[nums[i]] = i;
        }
        return ans;
    }
};
