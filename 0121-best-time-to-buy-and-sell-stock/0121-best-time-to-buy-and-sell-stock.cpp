class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy =prices[0];
        int profit=0,maxprofit=0;

        for(int i=1;i<n;i++){
            profit= prices[i]-buy;
            if(profit<=0){
                buy=prices[i];
            }
            else{
                if(profit>maxprofit){
                    maxprofit=profit;
                }
            }
        }
        return maxprofit;
    }
};