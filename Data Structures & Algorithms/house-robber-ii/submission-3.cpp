class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        else if(nums.size() == 2) return max(nums[0], nums[1]);    

        vector<int> OPT(nums.size() - 1);
        OPT[0] = nums[0];
        OPT[1] = max(nums[0], nums[1]);    

        int max1 = 0;
        int max2 = 0;

        for(int i = 2; i < nums.size() - 1; ++i)
        {
            OPT[i] = max(OPT[i-1], OPT[i-2] + nums[i]);
        }

        max1 = OPT[OPT.size() - 1];
        OPT[0] = nums[1];          
        OPT[1] = max(nums[1], nums[2]);
        for(int i = 2; i < nums.size() - 1; ++i)
        {
            OPT[i] = max(OPT[i-1], OPT[i-2] + nums[i+1]);
        }

        max2 = OPT[OPT.size() - 1];

        return max(max1, max2);
    }
};
