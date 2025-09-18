class Solution {
public:
    int maxDepth(string s) {
       int maxdep =0;
       int count=0;
        for(char ch: s){
         if(ch=='('){
           count++;
           maxdep= max(maxdep,count);
         }
         else if(ch==')'){
                count--;
        }
        }
        return maxdep;
    }
};