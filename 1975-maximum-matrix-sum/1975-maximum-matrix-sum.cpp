class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long total = 0;
        int negCount = 0;
        int minAbs = INT_MAX;

        for (auto &row : matrix) {
            for (int x : row) {
                if (x < 0) negCount++;
                total += llabs(x);
                minAbs = min(minAbs, abs(x));
            }
        }

        if (negCount % 2 == 0)
            return total;
        else
            return total - 2LL * minAbs;
    }
};