class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // cp  curret product , mp maximum product
        int maxp = nums[0], minp = nums[0],ans = nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(maxp,minp);
            }
           maxp = max(maxp*nums[i],nums[i]);
           minp = min(minp*nums[i],nums[i]);
           ans = max(ans,maxp);
        }
        return ans;
    }
};