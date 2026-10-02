class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;

        for(string str:strs){
            string st = str;
            sort(st.begin(),st.end());
            mp[st].push_back(str);
        }

        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};