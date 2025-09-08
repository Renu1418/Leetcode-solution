class Solution {
public:
    string removeOuterParentheses(string s) {
         int count=0;
        int n =s.size();
        string ans="";
        ans.reserve(n);

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(count>0){
                  ans.push_back(s[i]);
                }
                count++;
            }
            else if(s[i]==')'){
                count--;
                if(count>0){
                    ans.push_back(s[i]);
                }
            }
        }
        return ans;
    }
};