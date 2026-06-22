class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        unordered_map<char,int>mp;

        for(char ch:text){
            mp[ch]++;
        }
        string s = "balloon";
        int count = 0;
        while(mp['b'] >= 1 && mp['a'] >= 1 && mp['l'] >= 2 && mp['o'] >= 2 && mp['n'] >= 1){
            for(char ch:s){
                 mp[ch]--;
                }
                count++;
            
        }
        return count;
    }
};