class Solution {
public:
    string largestOddNumber(string num) {
        string s="";
        int n=num.size();
       if((num.back()-'0')%2!=0){
        return num;
       }
       else{
        for(int i=n-1;i>=0;i--){
            int digit=num[i]-'0';
            if(digit%2!=0){
                s= num.substr(0,i+1);
                break;
            }
        }
       }
       return s;
    }
};