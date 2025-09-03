class Solution {
public:
    string reverseVowels(string s) {
        int n =s.size();
     int start=0;
     int  end=n-1;
     set<char>vowel={'a','e','i','o','u','A','E','I','O','U'};


     while(start<end){
        if(!vowel.count(s[start])){
            start++;
        }
        else if(!vowel.count(s[end])){
            end--;
        }
        else{
            swap(s[start],s[end]);
            start++;
            end--;
        }
     }
     return s;
    }
};