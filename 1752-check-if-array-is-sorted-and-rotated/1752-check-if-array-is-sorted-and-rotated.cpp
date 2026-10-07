class Solution {
public:
    bool check(vector<int>& nums) {
        
        int pivot = 0;
        int n = nums.size();
        for(int i=1;i<n;i++){

            if(nums[i-1]>nums[i]){
                pivot++;
            }   
        }

        if(nums[0]<nums[n-1]){
            pivot++;
        }

        if(pivot<=1){
            return true;
        } 
      return false;
    }
};