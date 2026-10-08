class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      
     int i=0;
      int n = nums.size();

     for(int j=1;j<n;j++){
        if(nums[j]!=0){
            while(i<j && nums[i]!=0){
                i++;
            }
            swap(nums[i],nums[j]);
        }
     }
    }
};