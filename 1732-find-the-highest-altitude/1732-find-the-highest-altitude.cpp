class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>ans;
        ans.push_back(0);
         int n = gain.size();
         int i = 0;
         int sum = 0;
         while(i<n){
             sum = sum + gain[i];
            ans.push_back(sum);
            i++;
         }
         int maxgain = INT_MIN;
         for(int i=0;i<ans.size();i++){
            maxgain = max(maxgain,ans[i]);
         }
       return maxgain;
    }
};