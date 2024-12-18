class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        sort(strs.begin(), strs.end());
        int N = strs.size();
        string first = strs[0], last = strs[N-1];
        for (int i = 0; i < first.size(); i++){
            if (first[i] != last[i])
                return result;
            result += first[i];
        }
        return result;
    }
};

/*
This code implements the longestCommonPrefix function that 
takes a list of strings v as input and returns the longest common prefix of all the strings. Here is an explanation of how the code works:

Initialize an empty string ans to store the common prefix.

Sort the input list v lexicographically. This step is necessary because
the common prefix should be common to all the strings, so we need to find the common prefix of the first and last string in the sorted list.

Iterate through the characters of the first and last string in the sorted list, 
stopping at the length of the shorter string.

If the current character of the first string is not equal to the current character of the last string, return the common prefix found so far.
Otherwise, append the current character to the ans string.

Return the ans string containing the longest common prefix.

Note that the code assumes that the input list v is non-empty, 
and that all the strings in v have at least one character. If either of these assumptions is not true, the code may fail.
*/