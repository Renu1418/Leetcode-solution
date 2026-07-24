class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(),nums.end());
        int sum = 0;
        for(int num:nums){
            sum += num;
        }
        int r=sum;
        int ans=0;
        while(l<=r){
            int mid =l+(r-l)/2;
            sum=0;
            int count=1;
            for(int i=0;i<nums.size();i++){
                sum += nums[i];
                if(sum>mid){
                    count++;
                    sum=nums[i];
                }
            }
            if(count<=k){
               ans=mid;
               r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};