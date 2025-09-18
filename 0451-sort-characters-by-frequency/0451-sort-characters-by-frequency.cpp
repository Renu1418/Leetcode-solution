class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;

        for(char c : s){
            mp[c]++;
        }
         vector<pair<char,int>>v(mp.begin(),mp.end());

         sort(v.begin(),v.end(),[](auto &p1,auto &p2){
            return p1.second>p2.second;
         });
         string ans="";
         for(auto &p : v){
            ans.append(p.second,p.first);
         }
         return ans;
    }
};