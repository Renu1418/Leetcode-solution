class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
       int ans =0;
       int l = *min_element(bloomDay.begin(),bloomDay.end());
       int r = *max_element(bloomDay.begin(),bloomDay.end());

       if((long long)m*k > bloomDay.size()){
        return -1;
       }
       while(l<=r){
         int mid = l+(r-l)/2;
        int flower=0;
        int bouquets=0;
         for(int day:bloomDay){
            if(day<=mid){
                flower++;
            }
            else{
                flower =0;
            }

            if(flower == k){
             bouquets++;
             flower=0;
            }
         }
         if(bouquets>=m){
            ans=mid;
            r=mid-1;
         }
         else{
            l=mid+1;
         }
         }

      return ans;
    }
};