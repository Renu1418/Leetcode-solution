class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n= weights.size();
        int l = *max_element(weights.begin(), weights.end());
        int sum =0;
        for(int w:weights){
         sum+=w;
        }
        int r= sum;
        int ans = 0;
        while(l<=r){
            int mid=l+(r-l)/2;
            sum=0;
            int count=1;
            for(int i=0;i<n;i++){
              sum+=weights[i];
              if(sum>mid){
                count++;
                sum= weights[i];
              }
            }
            if(count<=days){
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