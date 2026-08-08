class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        unordered_set<int>st;
        int l=0;

        for(int r=0;r<s.size();r++){

            if(st.count(s[r])){
                while(l<=r && s[l]!=s[r]){
                    st.erase(s[l]); 
                    l++;
                }
                 l++;
            }
            else{
                st.insert(s[r]);
                
                 
            }
            
           maxlen = max(maxlen,r-l+1);

        }
        return maxlen;
    }
};