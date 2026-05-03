class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int>OPT(nums.size(), -1);

        OPT[0] = 0;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            for(int j = 0; j < i; ++j)
            {
                if(OPT[j]!=-1 && j + nums[j] >= i) 
                {
                    if(OPT[i]!=-1) OPT[i] = min(OPT[i], OPT[j] + 1);
                    else{
                        OPT[i] = OPT[j] + 1;
                    }
                }
            }
        }

        return OPT[nums.size()-1];
    }
};
