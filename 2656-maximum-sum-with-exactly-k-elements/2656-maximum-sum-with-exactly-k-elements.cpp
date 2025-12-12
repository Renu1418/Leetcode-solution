class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n=nums.size();
        int m =INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>m){
                m = nums[i];
            }
        }
        int max_score=0;
        while(k>0){
          max_score +=m;
          m=m+1;
          k--;
        }
     return max_score;
    }
};