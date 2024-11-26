
class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.size() - 1;

        while (start < end) {
            // Bỏ qua ký tự không phải chữ cái hoặc số
            while (start < end && !isalnum(s[start])) start++;
            while (start < end && !isalnum(s[end])) end--;

            // So sánh ký tự ở hai đầu
            if (tolower(s[start]) != tolower(s[end])) return false;

            // Di chuyển tiếp
            start++;
            end--;
        }

        return true;
    }
};