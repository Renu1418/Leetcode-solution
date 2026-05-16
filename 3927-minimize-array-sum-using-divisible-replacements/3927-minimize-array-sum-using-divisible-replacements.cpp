class Solution {
public:
    long long minArraySum(vector<int>& nums) {
          
         map<long long,long long>mp;
          int max_num = INT_MIN;
         for(int &num:nums ) {
                mp[num]++;
             max_num = max(max_num,num);
        }
         long long sum = 0;
         for(auto &[num,count]:mp){
            if(count == 0){
                continue;
            }
          for(int curr=num ;curr<=max_num; curr+=num){
            if(mp.count(curr) && mp[curr]>0){
                sum += mp[curr]*num;
                mp[curr] = 0;
            }
          }
         }
        return sum;
    }
};