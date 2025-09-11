class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();

        for(int i=1;i<n;i++){
           if(nums[i]!=nums[i+1]){
            return 1;
           }
        }
        return 0;
    }
};