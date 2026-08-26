class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        long long minLen = INT_MAX;
        long long sum = 0;
        for(int r=0;r<nums.size();r++){
           sum = sum+nums[r];
           while(sum>=target){
           minLen = min(minLen, (long long)(r - l + 1));
            sum = sum - nums[l];
            l++;
           }
        }
        if(minLen==INT_MAX){
            return 0;
        }
        return minLen;
    }
};