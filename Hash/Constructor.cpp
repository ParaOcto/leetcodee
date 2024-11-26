class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> ch;
        for (int i = 0; i < magazine.size(); i++)
            ch[magazine[i]]++;
        map<char, int> chh;
        for (int i = 0; i < ransomNote.size(); i++)
            chh[ransomNote[i]]++;
        for (int i = 0; i < ransomNote.size(); i++)
            if (chh[ransomNote[i]] > ch[ransomNote[i]])    return false;
        return true;
    }
};