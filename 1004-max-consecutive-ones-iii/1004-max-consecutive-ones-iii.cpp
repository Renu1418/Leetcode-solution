class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();

        int Freq=0;
        int l=0;
        int ans=0;
        for(int r=0;r<n;r++){
            if(nums[r]==0){
                Freq++;
            }
            while(Freq>k){
                if(nums[l]==0){
                Freq--;
                }
                l++;
            }
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};