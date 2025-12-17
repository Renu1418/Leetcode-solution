class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0;
        int count=0,maxcon =INT_MIN ;
         while(j<nums.size()){
            if(nums[j]==0){
                count++;
            }
         while(i<=j && count>k){
            if(nums[i]== 0){
                count--;
            }
            i++;
         }
         maxcon = max(maxcon,j-i+1);
         j++;
         }
         return maxcon;
    }
};