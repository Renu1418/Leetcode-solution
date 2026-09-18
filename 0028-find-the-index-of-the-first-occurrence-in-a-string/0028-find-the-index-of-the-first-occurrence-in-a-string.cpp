class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n = haystack.size();
        int m = needle.size();
        if (m > n) { return -1; }

        for(int l=0;l<=n-m;l++){
            int r=0;
            while(r<m){
                if(haystack[l+r] != needle[r]){
                  break;
                }
                r++;
            }
            if(r==m){
                return l;
            }
        }
        return -1;
    }
};