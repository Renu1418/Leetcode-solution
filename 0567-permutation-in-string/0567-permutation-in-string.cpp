class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.size() > s2.size())
            return false;

        int freq1[26] = {0};
        int freq2[26] = {0};

        // s1 ka frequency count
        for(int i = 0; i < s1.size(); i++) {
            freq1[s1[i] - 'a']++;
        }

        int window = s1.size();

        // s2 ki first window ka frequency count
        for(int i = 0; i < window; i++) {
            freq2[s2[i] - 'a']++;
        }

        // First window compare
        bool same = true;

        for(int i = 0; i < 26; i++) {
            if(freq1[i] != freq2[i]) {
                same = false;
                break;
            }
        }

        if(same)
            return true;

        // Sliding window
        int left = 0;

        for(int right = window; right < s2.size(); right++) {

            freq2[s2[right] - 'a']++;

            freq2[s2[left] - 'a']--;

            left++;
            same = true;

            for(int i = 0; i < 26; i++) {
                if(freq1[i] != freq2[i]) {
                    same = false;
                    break;
                }
            }

            if(same)
                return true;
        }

        return false;
    }
};