class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int low =1;
        int high = *max_element(piles.begin(),piles.end());
        int mink=0;
        
        while(low<=high){
            long long totalhr=0;
           int mid = low+(high-low)/2;
           for(int pile:piles){
             int q =pile/mid;
             int r = pile%mid;
             totalhr += q;
             if(r>0){
                totalhr+=1;
             }
           }
           if(totalhr>h){
            low=mid+1;
           }
           else{
            mink=mid;
            high=mid-1;
           }
        }

     return mink;
    }
};