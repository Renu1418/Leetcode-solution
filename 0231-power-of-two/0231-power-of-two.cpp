class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n <= 0) return false;
        
        if(n==1){
            return true;
        }
        int
        long long ans = 1;
        while(ans<n){
            ans = ans*2;
            if(ans==n){
                return true;
            }
        }
        return false;
    }
};