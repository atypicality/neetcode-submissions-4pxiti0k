class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        if(target < nums[l]) return 0;
        if(target > nums[r]) return nums.size();
        int mid;
        while(true)
        {
            mid = (l + r)/2;

            if(nums[mid] == target) return mid;
            if(target > nums[mid])
            {
                if(l == mid) break;
                l = mid;
            }else {
                if(r == mid) break;
                r = mid;
            } 
        }
        if(r == mid) return mid - 1;
        if(l==mid && target>nums[r]) return mid+2;
        return mid + 1;
    }
}; 

//-1,0,2,4,6,8         2 4 6 8     4 6 8     6 8    6
//0  1 2 3 4 5         2 3 4 5     3 4 5     4 5    4