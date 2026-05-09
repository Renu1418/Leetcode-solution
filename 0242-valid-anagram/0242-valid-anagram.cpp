class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>mp; 
        for(int ch:s){
            mp[ch]++;
        }

        for(int ch:t){
              mp[ch]--;

              if(mp[ch]==0){
                mp.erase(ch);
              }
        }
    
                return mp.empty();
          }
};