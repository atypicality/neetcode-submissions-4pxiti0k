class Solution {
public:
    int rob(vector<int>& nums) {
        std::vector<std::vector<int>> OPT(nums.size(), std::vector<int>(2,0));

        OPT[0][0] = nums[0]; 
        OPT[0][1] = 0; 

        for(int i = 1; i < nums.size(); ++i)
        {
            OPT[i][0] = OPT[i-1][1] + nums[i];
            for(int j = 0; j < i; j++)
            {
                OPT[i][1] = std::max(OPT[i][1], OPT[j][0]); 
            }
        }

        return std::max(OPT[nums.size()-1][0],OPT[nums.size()-1][1]);
    }
};


//either you choose to include or you dont
//OPT[i][0] = include  best if you do
//OPT[i][1] = dont include best if you dont
//OPT[i][0] = OPT[i-1][1] + nums[i];
//OPT[i][1] = OPT[i-1][0]
//i prob mised something