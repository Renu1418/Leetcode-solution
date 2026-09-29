class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1;
        int r = *max_element(nums.begin(),nums.end());
         int ans = 0;
        while(l<=r){
            int mid = l+(r-l)/2;
            int sum =0;
            for(int i=0;i<nums.size();i++){
               if(nums[i]<mid){
                 sum++;
               }
            else if(nums[i]>=mid){
                sum += nums[i]/mid;
               if(nums[i]%mid!=0){
                sum++;
               }
               }
            }
            if(sum<=threshold){
               ans = mid;
               r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};