#include<bits/stdc++.h>

using namespace std;

int main(){
}
class Solution {
public:
    int lengthOfLongestSubstring(string s){
        if(s.size()<1) return 0;
        if(s.size()<2) return 1;
        set<char> S;
        int left = 0,right = 0,mx = 0;
        for(right;right<s.size();right++){
            while(S.find(s[right]) != S.end()){
                S.erase(s[left]);
                left++;
            }
            S.insert(s[right]);
            mx = max(mx,right-left+1);
    }
    return mx;
    } 
};
