class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        std::vector<int> OPT(nums.size(), 1);
        OPT[0] = 1;
        for(int i = 1; i < nums.size(); ++i)
        {
           for(int j = 0; j < i; ++j)
           {
                if(nums[i] > nums[j])
                {
                    OPT[i] = std::max(OPT[i], 1 + OPT[j]);
                }
           }
        }

        int best = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            best = std::max(best, OPT[i]);
        }
        return best;
    }

 
    //OPT[i] = 
};
