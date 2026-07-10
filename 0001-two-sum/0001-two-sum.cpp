class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
         vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int diff =target-nums[i];

            if(mp.count(diff)){
              ans = {i, mp[diff]};
            }
            mp[nums[i]] = i;

        }
        return ans;
    }
};