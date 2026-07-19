class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = 0, n =nums.size();

        if(n==1){
            return nums[0];
        }
        if(nums[0]<nums[n-1]){
         return nums[0];
        }

        for(int i=1;i<n;i++){
         if(nums[i-1]>nums[i]){
            ans = nums[i];
            break;
         }
        }
        return ans;
    }
};