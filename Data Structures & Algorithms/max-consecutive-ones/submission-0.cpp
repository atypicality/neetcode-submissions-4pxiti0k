class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0;
        int max = 0;
        bool lastOne = false;

        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i]==1)
            {
                ++curr;
            } else
            {
                if(curr > max) max = curr;
                curr = 0;
            }
        }
        if(curr > max) max = curr;
        return max;
    }
};