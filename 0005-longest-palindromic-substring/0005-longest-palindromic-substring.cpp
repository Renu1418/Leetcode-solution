class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int max_len = 1;
        int n=s.size();
        
        for(int i=0;i<n;i++){
            
            // odd length
            int l = i,r = i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>max_len){
                    start = l;
                    max_len = r-l+1;
                }
                l--;
                r++  ;
            }
           
           // even length
             l = i;
             r = i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>max_len){
                    start = l;
                    max_len = r-l+1;
                }
                l--;
                r++  ;
            }

        }
      return s.substr(start,max_len);
    }
};