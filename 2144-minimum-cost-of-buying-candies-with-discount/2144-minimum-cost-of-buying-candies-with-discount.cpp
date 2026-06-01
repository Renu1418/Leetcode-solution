class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());

        int n = cost.size();
        int sold = 0;

        for (int i = n - 1; i >= 0; i -= 3) {
            sold += cost[i];          // sabse mehengi
            if (i - 1 >= 0) {
                sold += cost[i - 1];  // doosri mehengi
            }
            // i-2 wali free hai
        }

        return sold;
    }
};