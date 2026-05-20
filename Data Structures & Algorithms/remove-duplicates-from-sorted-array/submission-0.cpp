class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int currentNum = nums[0];
        for(int i = 1; i < nums.size(); ++i)
        {
            if(nums[i]==currentNum)
            {
                nums.erase(nums.begin() + i);    
                --i;
            }
            currentNum = nums[i];
        }
        return nums.size();
    }
};