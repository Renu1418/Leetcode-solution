class Solution {
public:
    int divide(int dividend, int divisor) {
        int sign = 1;

        long long count = 0;
        long long d = dividend;
        long long div = divisor;

        if (d < 0 && div < 0) {
            d = -d;
            div = -div;
        }

        if (d < 0) {
            sign = -1;
            d = -d;
        }

        if (div < 0) {
            sign = -1;
            div = -div;
        }

        while (d >= div) {
            int i = 0;

            while ((div << (i + 1)) <= d) {
                i++;
            }

            d = d - (div << i);

            count = count + (1LL << i);
        }

        if (sign == -1) {
            count = -count;
        }

        if (count > INT_MAX) {
            return INT_MAX;
        }

        if (count < INT_MIN) {
            return INT_MIN;
        }

        return count;
    }
};