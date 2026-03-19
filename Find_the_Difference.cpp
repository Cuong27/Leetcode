class Solution {
public:
    char findTheDifference(string s, string t) {
        char temp = 0;
        for(char x:s) temp^=x;
        for(char y:t) temp^=y;
        return temp;
    }
};
