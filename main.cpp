class Solution {
public:
    bool isPalindrome(int x) {
        bool res = true;
        
        if (x < 0) {
            res = false;
        }
        else {
            int str[10];
            int temp = x;
            int index = 0;
            
            while (temp != 0) {
                int remainder = temp % 10;
                
                str[index++] = remainder;
                temp /= 10;
            } 
            
            int startIndex = 0;
            int endIndex = index - 1;

            while (startIndex <= endIndex) {
                if (str[startIndex++] != str[endIndex--]) {
                    res = false;
                    
                    break;
                }
            }
        }
        
        return res;
    }
};
