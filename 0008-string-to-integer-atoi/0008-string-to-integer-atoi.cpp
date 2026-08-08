class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        long long ans = 0;
        bool digitFound = false;

        for (int i = 0; i < s.size(); i++) {

            // leading whitespace
            if (!digitFound && s[i] == ' ') {
                continue;
            }

            // sign
            if (!digitFound && s[i] == '-') {
                sign = -1;
                digitFound = true;
                continue;
            }

            if (!digitFound && s[i] == '+') {
                sign = 1;
                digitFound = true;
                continue;
            }

            // digit
            if (s[i] >= '0' && s[i] <= '9') {
                digitFound = true;

                ans = ans * 10 + (s[i] - '0');

                if (sign == 1 && ans > INT_MAX) {
                    return INT_MAX;
                }

                if (sign == -1 && -ans < INT_MIN) {
                    return INT_MIN;
                }
            }
            else {
                break;
            }
        }

        if (!digitFound) {
            return 0;
        }

        return sign * ans;
    }
};