class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int>mp;

        for(char ch:s){
            mp[ch]++;
        }
        int even=0;
        int odd=0;
        int count=0;
        int ans=0;

        for(auto it:mp){
            count = it.second;
            if(count%2==0){
                even = even+count;
            }
            if( count%2==1){
                if(ans==0){
                    ans=1;
                odd= odd+count;
                }
                else{
                    odd= odd+count-1;
                }
            }
        }
        return even+odd;
    }
};