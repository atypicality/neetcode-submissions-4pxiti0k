class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<bool>OPT(nums.size(), false);

        //Basecase
        OPT[0] = true;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            for(int j = 0; j < i; ++j)
            {
                if(OPT[j]==true && j + nums[j] >= i) OPT[i] = true;
            }
        }

        return OPT[nums.size()-1];
    }
};
