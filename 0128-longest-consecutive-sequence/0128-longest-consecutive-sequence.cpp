class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
       map<int,int>mp;
       int n = nums.size();
       if(n==0){
        return 0;
       }
       for(int i =0;i<n;i++){
        mp[nums[i]]++;
       }

       if(mp.size()==1){
        return 1;
       }
        
       auto prev = mp.begin();
       auto curr = next(mp.begin());
       
       int count =1;
       int maxi = INT_MIN;
       while(curr!=mp.end()){
        int diff = curr->first - prev->first;
        if(diff==1){
            count++;
            maxi = max(maxi,count);
        }
        else{
            count=1;
            maxi = max(maxi,count);
        }

        prev = curr;
        curr++;
       }
       return maxi;
    }
};