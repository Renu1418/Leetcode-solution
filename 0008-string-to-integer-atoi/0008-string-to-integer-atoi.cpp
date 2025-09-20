class Solution {
public:
    int myAtoi(string s) {
      
      int i=0;
     while(i<s.size() && s[i]==' ') i++;
       
        int sign =1;
        if( i<s.size() && s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(i<s.size() && s[i]=='+'){
            sign = +1;
            i++;
        }
       long long result =0;
       while(i<s.size() && (s[i]>='0' && s[i]<= '9')){
            int digit = s[i] - '0';
            
            // to check overflow and underflow 
            if(result > INT_MAX/ 10 || (result ==INT_MAX/10) &&  digit>7) {  
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            
            result = result * 10 + digit;
            i++;
       }
       return result*sign;
    }
};