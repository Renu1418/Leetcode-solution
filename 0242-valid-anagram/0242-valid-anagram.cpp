class Solution {
public:
    bool isAnagram(string s, string t) {
       
    unordered_map<char,int>mp;
      
      for(char cs:s){
        mp[cs]++;
      }
      for(char ct:t){
        mp[ct]--;
      }

      for(auto c:mp){
       if(c.second!=0){
        return false;
       }
      }
     return true;
    }
};