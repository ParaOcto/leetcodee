class Solution {
public:
    int lengthOfLastWord(string s) {
        int countLastWord = 0;
        while (s[s.size()-1] == ' ')    s.erase(s.size()-1);
        for (int i = s.size()-1; i >= 0; i--)
            if (s[i] != ' ')    countLastWord++;
            else break;
        return countLastWord;
    }
};