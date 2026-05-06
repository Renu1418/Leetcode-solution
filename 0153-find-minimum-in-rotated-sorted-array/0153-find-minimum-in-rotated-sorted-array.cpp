class Solution {
public:
    int findMin(vector<int>& nums) {
        int minNum=nums[0];
          if(nums.size()<2){
            return nums[0];
          }
        for(int i=0;i<nums.size();i++){
           minNum=min(nums[i],minNum);
        }
        return minNum;;
    }
};