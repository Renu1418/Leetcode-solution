class Solution {
public:
    int sumDecoded(vector<long long>& nums) {

        const long long MOD = 1e9 + 7;
        long long sum = 0;

        for(int i = 0; i < nums.size(); i++) {

            long long w = nums[i] % 10;
            long long d = nums[i] / 10;

            long long digits = log10(d) + 1;

            long long divisor = pow(10, digits - w);

            long long x = d / divisor;
            long long y = d % divisor;

            long long ans = 1;

            while(y > 0) {

                if(y % 2 == 1) {
                    ans = (ans * x) % MOD;
                }

                x = (x * x) % MOD;
                y /= 2;
            }

            sum = (sum + ans) % MOD;
        }

        return sum;
    }
};