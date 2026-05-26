class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0,righ = nums.size()-1;

        while(left<righ){
            int mid = left+(righ-left)/2;

            if(nums[mid]>nums[righ]){
                left = mid+1;
            }
            else{
                righ = mid;
            }
        }
        return nums[left];
    }
};