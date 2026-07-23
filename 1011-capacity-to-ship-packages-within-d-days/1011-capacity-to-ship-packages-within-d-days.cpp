class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
         int ans=0;
         int n = weights.size();
        int l= *max_element(weights.begin(),weights.end());
        int sum =0;
        for(int wt:weights){
          sum += wt;
        }
        int r= sum;

        while(l<=r){
            int mid = l+(r-l)/2;
            int max_days =0;
            sum=0;
            for(int i=0;i<n;i++){
                sum += weights[i];
                if(sum==mid){
                 max_days++;
                    sum=0;
                }
           else if(sum>mid){
              max_days++;
              sum=weights[i];
           }
            if(i==n-1 && sum>0){
                max_days++;
            }
           
            }
            if(max_days<=days){
                ans = mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};