class Solution {
public:
    int numberOfSpecialChars(string word) {

        unordered_map<char,int> firstUpper;
        unordered_map<char,int> lastLower;

        int n = word.size();

        // first uppercase occurrence
        for(int i = 0; i < n; i++) {

            char ch = word[i];

            if(isupper(ch) && !firstUpper.count(tolower(ch))) {
                firstUpper[tolower(ch)] = i;
            }
        }

        // last lowercase occurrence
        for(int i = n - 1; i >= 0; i--) {

            char ch = word[i];

            if(islower(ch) && !lastLower.count(ch)) {
                lastLower[ch] = i;
            }
        }

        int count = 0;

        for(auto it : lastLower) {

            char ch = it.first;

            // lowercase and uppercase both exist
            if(firstUpper.count(ch)) {

                // all lowercase before first uppercase
                if(lastLower[ch] < firstUpper[ch]) {
                    count++;
                }
            }
        }

        return count;
    }
};