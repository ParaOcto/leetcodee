class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int X[255];
        X['I'] = 1;
        X['V'] = 5;
        X['X'] = 10;
        X['L'] = 50;
        X['C'] = 100;
        X['D'] = 500;
        X['M'] = 1000;
        for (int i = 0; i < s.size(); i++)
            if (X[s[i]] < X[s[i+1]])
                result -= X[s[i]];
            else
                result += X[s[i]];
        return result;
    }
};