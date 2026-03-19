class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int sum=0;
        for(int i = 0;i<ransomNote.size();i++){
            if(magazine.find(ransomNote[i])!=string::npos){
                int id = magazine.find(ransomNote[i]);
                sum++; 
                magazine.erase(id,1);
            }
        }
        if(sum==ransomNote.size()) return true;
        else return false;
        ;
    }
};
