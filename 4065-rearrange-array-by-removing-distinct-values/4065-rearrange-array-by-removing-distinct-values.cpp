class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> mp;

        // frequency count
        for(int x : nums) {
            mp[x]++;
        }

        int maxFreq = 0;

        for(auto x : mp) {
            maxFreq = max(maxFreq, x.second);
        }

        // har round
        for(int i = 1; i <= maxFreq; i++) {
            vector<int> temp;

            for(auto x : mp) {
                if(x.second >= i) {
                    temp.push_back(x.first);
                }
            }

            sort(temp.begin(), temp.end());

            for(int x : temp) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};