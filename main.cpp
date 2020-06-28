class Solution {
public:
    bool isPalindrome(int x) {
        bool res = true;
        
        string str = to_string(x);
        int startIndex = 0;
        int endIndex = str.size() - 1;
        
        while (startIndex <= endIndex) {
            if (str[startIndex++] != str[endIndex--]) {
                res = false;
                break;
            }
        }
        
        return res;
    }
};
