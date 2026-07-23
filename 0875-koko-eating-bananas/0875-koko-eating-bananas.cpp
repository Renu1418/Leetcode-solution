class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=0;
        int l=1;
        int r = *max_element(piles.begin(),piles.end());

        while(l<=r){
            int mid = l+(r-l)/2;
           long long totalhr=0;
            for(int pile:piles){
            totalhr += (pile + mid-1)/mid;
            }
            if(totalhr>h){
                l = mid+1;
            }
            else{
                ans=mid;
                r = mid-1;
            }
        }
        return ans;
    }
};