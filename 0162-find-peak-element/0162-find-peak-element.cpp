class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l=1;
        int r = n-2;
        long long peak = 0;
        if(n==1){
          return 0;
        }
        if(n == 2) {
          if(nums[0] > nums[1]){
            return 0;
          }
          else{
            return 1;
         }
        }

        if(nums[0] > nums[1]){
         return 0;
        }
        if(nums[n-1] > nums[n-2]){
         return n-1;
        }
        while(l<=r){
            int mid = l+(r-l)/2;

            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                peak = mid;
                break;
            }
            if(nums[mid]<nums[mid+1]){
                l = mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return peak;
    }
};