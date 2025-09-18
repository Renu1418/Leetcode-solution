class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;

        string plus =  s+s;
        return plus.find(goal)!= string::npos;
    }
};