class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_set<int>st(nums.begin(),nums.end());

       int sum1=0;
       int sum2=0;

       for(int x:st){
        sum1 = sum1 +(2*x);
       }

       for(int y:nums){
         sum2 =sum2 +y;
       }
        
       return sum1-sum2;
    }
};