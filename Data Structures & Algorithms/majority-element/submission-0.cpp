class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>opt;
        for(int i = 0; i < nums.size(); ++i)
        {
            ++opt[nums[i]];
            if(opt[nums[i]]>nums.size()/2) return nums[i];
        }
        return 0;
    }
};