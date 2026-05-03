class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int n = prices.size();
        if(n == 0) return 0;

        int Buy = prices[0];
        int maxprofit = 0;

        for(int i = 1; i < n; i++){
            Buy = min(Buy, prices[i]);                  // lowest price till now
            int profit = prices[i] - Buy;               // sell today
            maxprofit = max(maxprofit, profit);         // best profit so far
        }

        return maxprofit;
    }
};