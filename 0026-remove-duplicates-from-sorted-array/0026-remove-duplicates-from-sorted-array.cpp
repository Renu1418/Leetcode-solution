class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int count = 1;
        int idx=1;
        for(int i=0;i<n-1;i++){
            if(nums[i] != nums[i+1]){
               count++;
               nums[idx] = nums[i+1];
                idx++;
            }
        }
        return count;
    }
};