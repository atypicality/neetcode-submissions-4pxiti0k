class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int Aans = nums[0];
        int Amax = nums[0];
        int Amin = nums[0];

        for(int i = 1; i < nums.size(); ++i)
        {
            int Atemp = Amax * nums[i];
            int oldAmin = Amin;
            int oldAmax = Amax;

            Amax = max(nums[i], Atemp);
            Amax = max(Amax, nums[i] * Amin);

            Amin = min(nums[i], nums[i] * oldAmin);
            Amin = min(Amin, nums[i] * oldAmax);

            Aans = max(Aans, Amax);
        }
        return Aans;
    }
};
