class Solution {
public:
    bool isValid(string s) {
        int e = s.size();
        if(e%2!=0) return false;
        stack<char> Q;
        for(char c: s){
            if(c == '(' || c == '[' || c == '{')
            Q.push(c);
            else{
            if(Q.empty()) return false;
            if(c == ')' && Q.top() == '(') Q.pop();
            else if(c == ']' && Q.top() == '[') Q.pop();
            else if(c == '}' && Q.top() == '{') Q.pop();
            else return false;
            }
        }
        if(Q.empty()) return true;
        else return false;
    }
};
