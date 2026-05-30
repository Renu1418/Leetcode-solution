class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
         int min_ele = INT_MAX;
        for(int i = 0;i<n;i++){
           int digit = nums[i];
           int sum = 0;
           while(digit>0){
            int digit_rem = digit%10;
            sum += digit_rem;
            digit = digit/10;
           }
           min_ele = min(min_ele,sum);
        }
        return min_ele;
    }
};