class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
      unordered_map<int,int>mp;
      int count=0;

      for(int i=0;i<nums.size();i++){
        if(mp.find(nums[i])!=mp.end()){
            if(nums[i]==nums[i-1]){
                continue;
            }
            else{
               if(mp[nums[i]] == 1) {
                 count--;
                 mp[nums[i]]++;
                }
            }
        }
        else{
            mp[nums[i]]++;
            count++;
        }
      }
      return count;
    }
};