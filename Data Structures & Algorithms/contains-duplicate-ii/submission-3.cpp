class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); ++i)
        {
            for(int j = nums.size()-1; j > i; --j)
            {
                if(abs(i-j) > k) continue;
                if(nums[i]==nums[j] && abs(i-j) <= k) return true;
            }
        }
        return false;
    }
};