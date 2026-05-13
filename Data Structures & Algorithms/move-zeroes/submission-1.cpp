class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int notZero = 0;
        if(nums[0]!=0) notZero = 1;
        for(int i = 1; i < nums.size(); ++i)
        {
            if(nums[i]!=0)
            {
                swap(nums[i], nums[notZero]);
                ++notZero;
            }
        }
    }
};