class Solution {
public:
    string largestEven(string s) {
        int n =s.size();
        int last = n-1;
        for(int i=last;i>=0;i--){
       if(s[i]%2==0){
           return s;
       }
        else{
            s.pop_back();
        }
        }
            return s;
    }
};