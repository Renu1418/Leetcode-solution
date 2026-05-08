class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Plus → + Equal → =

        int maxlen = 0, n = s.length();

        for (int i = 0; i < n; i++) {
            int hash[256] = {0};
            for (int j = i; j < n; j++) {
                if (hash[s[j]]>0) {
                    break;
                }
                hash[s[j]]++;
                maxlen = max(maxlen, j - i + 1);
            }
        }
        return maxlen;
    }
};
