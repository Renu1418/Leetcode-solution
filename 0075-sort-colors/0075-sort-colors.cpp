class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int cnt=0;
        for(int i=0;i<=2;i++){
           int num = mp[i];
           for(int j=0;j<num;j++){
               
                nums[cnt] = i;
                cnt++;
            }
           }
        }
};