class Solution {
public:
    int numOfWays(int n) {
    long long abc = 6, aba = 6;
    int mod = 1e9 + 7;

    for(int i = 2; i <= n; i++) {
        long long newABC = (2*abc + 2*aba) % mod;
        long long newABA = (2*abc + 3*aba) % mod;
        abc = newABC;
        aba = newABA;
    }
    return (abc + aba) % mod;

    }
};