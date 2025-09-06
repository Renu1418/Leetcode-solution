class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1;
        vector<int>v2;
        int n =nums.size();
     for(int i=0;i<n;i++){
        if(nums[i]>=0){
            v1.push_back(nums[i]);
        }
        else{
            v2.push_back(nums[i]);
        }
     }
    nums.clear();
     for(int i=0;i<n/2;i++){
        if(v1[i]>0 && v2[i]<0){
            nums.push_back(v1[i]);
            nums.push_back(v2[i]);
        }
     }
     return nums;
    }
};