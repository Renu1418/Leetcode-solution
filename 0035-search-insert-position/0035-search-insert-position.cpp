class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         int st = 0, end = nums.size() - 1;
        int ans = nums.size(); 

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (target == nums[mid]) {
                return mid;
            }

            if (target < nums[mid]) {
                ans = mid;      
                end = mid - 1;
            }
            else {
                st = mid + 1;    
            }
        }
        return ans;
    }
};