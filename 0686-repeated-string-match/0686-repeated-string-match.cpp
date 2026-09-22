class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string s = "";

        for (int count = 1; count <= b.length() / a.length() + 2; count++) {
            s += a;

            if (s.length() >= b.length()) {
                for (int i = 0; i <= s.length() - b.length(); i++) {
                    if (s.substr(i, b.length()) == b) {
                        return count;
                    }
                }
            }
        }

        return -1;
    }
};