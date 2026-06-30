class Solution {
public:
    int numberOfSubstrings(string s) {
        
        int a = 0,b=0,c=0;
        int l=0,r=0;
        int ans = 0;

        for(int r=0;r<s.size();r++){
            if(s[r] == 'a'){
               a++;
            } 
            else if(s[r] == 'b' ){ 
                b++;
            }
             else if(s[r] == 'c'){
                c++;
             }

            
            
             while(a>0 && b>0 && c>0){
                ans+= s.size()-r;

                 if(s[l] == 'a'){
                   a--;
                  } 
                 else if(s[l] == 'b' ){ 
                    b--;
                  }
                  else if(s[l] == 'c'){ 
                    c--;
                  }

                 l++;
                }
             }
        return ans;
    }
};