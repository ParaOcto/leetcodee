class Solution {
public:
    string intToRoman(int num) {
        int change[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string s[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string result = "";
        int i = 0;
        while(num > 0){
            if (num >= change[i]){
                num -= change[i];
                result += s[i];
            }
            else i++;
        }
        return result;
    }
};