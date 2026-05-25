class Solution {
public:
     long long hoursCount(vector<int>& piles,int k){
      long long h = 0;
      for(int pile:piles){
      int q = pile/k; 
      int r = pile%k; 
       h += q; 
      if(r>0){ 
        h+=1; 
      }
      }
      return h;
     }


    
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_ele =0;
        for(int pile:piles){
            max_ele = max(max_ele,pile);
        }

        int low = 1;
        int high = max_ele;
        int ans = 0;
        while(low<=high){
           int  mid = low + (high-low)/2;

            if(hoursCount(piles,mid)<=h){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
      return ans;
    }
};