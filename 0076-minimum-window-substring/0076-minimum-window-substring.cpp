class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> need;
        for(char ch : t) {
            need[ch]++;
        }

        unordered_map<char, int> window;

        int l = 0;

        int formed = 0;
        int required = need.size();

        int minLen = INT_MAX;
        int ansL = 0;

        for(int r = 0; r < s.size(); r++) {

            window[s[r]]++;

            if(need.count(s[r]) &&
               window[s[r]] == need[s[r]]) {

                formed++;
            }

            while(formed == required) {

                if(r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    ansL = l;
                }
                window[s[l]]--;

                if(need.count(s[l]) &&
                   window[s[l]] < need[s[l]]) {

                    formed--;
                }

                l++;
            }
        }

        if(minLen == INT_MAX) {
            return "";
        }

        return s.substr(ansL, minLen);
    }
};