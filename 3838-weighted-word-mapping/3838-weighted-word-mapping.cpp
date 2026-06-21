class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map<char,int>mp;
        
        for(int i=0;i<26;i++){
            mp['a'+i] = weights[i];
        }
         string s = "";
        for(int i=0;i<words.size();i++){
            int sum = 0;
            for(int j=0;j<words[i].size();j++){
             char ch = words[i][j];
              sum += mp[ch];
            }
            int num = sum%26;
            s += ('z' - num);
        }
        return s;
    }
};