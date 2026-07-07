class Solution {
public:
    int missingNumber(vector<int>& nums) {
      //MATH approach

      int n = nums.size();
      int sum = 0;
      int bsum = 0;
      for(int i=1;i<=n;i++){
         bsum += i;
      }

     for(int i=0;i<n;i++){
         sum += nums[i];
      }
     return bsum-sum;
    }
};