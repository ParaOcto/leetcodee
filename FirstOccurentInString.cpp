class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos = -1;
        if (haystack.find(needle) == string::npos)
            pos = -1;
        else pos = haystack.find(needle);
        return pos;
    }
};