class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string temp1="",temp2="";
        for(string x:word1) temp1+=x;
        for(string y:word2) temp2+=y;
        return temp1==temp2;
        
    }
};
