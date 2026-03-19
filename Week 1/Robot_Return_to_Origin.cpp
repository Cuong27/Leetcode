class Solution {
public:
    bool judgeCircle(string moves) {
        if(moves.size()%2!=0) return false;
        map<char,int> M ={{'R',0},{'L',0},{'U',0},{'D',0}};
        for(char m : moves){
            M[m]++;
        }
        if(M['R']==M['L'] && M['U']==M['D']) return true;
        else return false;

    }
};
