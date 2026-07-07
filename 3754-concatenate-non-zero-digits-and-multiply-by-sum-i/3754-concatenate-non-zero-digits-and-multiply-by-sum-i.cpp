class Solution {
public:
    long long sumAndMultiply(int n) {
        
        string s = "";
        int sum = 0;
        if (n == 0){
            return 0;
        }
           
        while(n>0){
            int digit = n%10;
            if(digit!=0){
                s.push_back('0'+digit);
                sum += digit;
            }
             n = n/10;
        }
         
        reverse(s.begin(),s.end());
        long long x = stoll(s);
        return x*sum;
    }
};