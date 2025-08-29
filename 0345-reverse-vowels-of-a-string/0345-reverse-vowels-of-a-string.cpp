class Solution {
public:
    string reverseVowels(string s) {
        int n= s.size();
        int i=0;
        int j= n-1;
          set<char>vowel = {'a','e','i','o','u','A','E','I','O','U'};
        while(i<j){
            if(!vowel.count(s[i])){
                i++;
            }
            else if(!vowel.count(s[j])){
                j--;
            }
            else{
                 swap(s[i],s[j]);
                i++;
                j--;
            }
           
        }
        return s;
    }
};