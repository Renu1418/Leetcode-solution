class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxcount=0;
        int ans;
        for(int i:nums){
          mp[i]++;
        }

        for(auto it:mp){
            if(it.second>maxcount){
                maxcount = it.second;
                 ans=it.first;
            }
        }
        return ans;
    }
};