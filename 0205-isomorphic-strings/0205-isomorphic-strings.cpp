class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
     
        set<char>a;
        set<char>b;

        for(char ch:s){
            a.insert(ch);
        }
        for(char ch:t){
            b.insert(ch);
        }

        if(a.size()==b.size()){
            return true;
        }
        else{
            return false;
        }
    }
};