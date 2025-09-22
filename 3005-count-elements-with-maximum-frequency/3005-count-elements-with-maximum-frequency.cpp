class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
       int n = nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        
        int maxfreq =0;
        for(auto f:freq){
          maxfreq = max(maxfreq, f.second);
        }
       
       int sum =0;
       for(auto f:freq){
        if(maxfreq==f.second){
            sum+=f.second;
        }
       }

      return sum;
    }
};