class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        int i=0;
        int count=0;
        while(i<n){
            int j= i+1;
            int sum = nums[i];
            if(sum==k){
                count++;
                sum = nums[i];
            }

            if(j<n){
                sum = sum + nums[j];
                if(sum ==k){
                    count++;
                }
                j++;
            }
            i++;
        }
        return count;
    }
};