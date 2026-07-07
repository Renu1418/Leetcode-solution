class Solution {
public:
    int missingNumber(vector<int>& nums) {
     sort(nums.begin(),nums.end());
       int ans=0;
       int n = nums.size();
       if(n>nums.back()){
        return n;
       }
     for(int i=0;i<nums.size();i++){
        if(nums[i]!=i){
             return i;
        }
     }
     return 0;
    }
};