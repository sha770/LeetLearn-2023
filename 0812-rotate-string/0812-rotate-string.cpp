class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        goal=goal+goal;
        if(goal.find(s)!=string::npos) return true;
        return false;
    }
};