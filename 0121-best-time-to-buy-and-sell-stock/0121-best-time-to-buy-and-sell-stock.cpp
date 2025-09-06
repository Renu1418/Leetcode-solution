class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int buy =arr[0];
        int profit=0,maxprofit=0;

        for(int i=1;i<n;i++){
            profit= arr[i]-buy;
            if(profit<=0){
                buy=arr[i];
            }
            else{
                maxprofit=max(maxprofit,profit);
            }
        }
        return maxprofit;
    }
};