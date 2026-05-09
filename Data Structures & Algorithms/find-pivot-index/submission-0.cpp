class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i = 1; i < nums.size(); ++i)
        {
            nums[i] += nums[i-1];
        }
        
        int total = nums[nums.size()-1];
        if(total - nums[0] == 0) return 0;
        
        for(int i = 1; i < nums.size(); ++i)
        {
            if(total - nums[i] == nums[i-1]) return i;
        }    

        return -1;
    }
};