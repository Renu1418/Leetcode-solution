class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans=0;
        int l=1;
        int r= *max_element(nums.begin(),nums.end());

        while(l<=r){
            int mid = l+(r-l)/2;
            int sum =0;
            for(int num:nums){
                if(num<mid){
                    sum++;
                }
            else if(num>=mid){
                sum += num/mid;
                if(num % mid != 0){
                  sum++;
                }
            }
            }
            if(sum<=threshold){
                ans=mid;
                r = mid-1;
            }
            else{
                l= mid+1;
            }
        }
        return ans;
    }
};