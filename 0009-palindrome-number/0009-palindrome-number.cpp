class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        int old_num = x;
        long long new_num = 0;
        while(x>0){
            int num = x%10;
            new_num  = new_num*10+num;
            x = x/10;
        }
        if(new_num == old_num){
            return true;
        }
        return false;
    }
};