class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int maxlength=0, n=s.size();
        for(int i=0;i<n;i++){
            int hash[256] = {0};
            for(int j=i;j<n;j++){
                if(hash[s[j]] == 1){
                    break;
                }
                int length = j-i+1;
                maxlength = max(maxlength,length);
                hash[s[j]]=1;
            }
        }
        return maxlength;
    }
};