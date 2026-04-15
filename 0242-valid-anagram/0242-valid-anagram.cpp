class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int>mp;

        for(char ch:s){
            mp[ch]++;
        }
        for(char c:t){
            mp[c]--;
        }
        for(auto it:mp){
            if(it.second != 0){
                return false;
            }
        }
        return true;
    }
};