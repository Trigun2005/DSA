class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long reversedInteger = 0;
        if(x < 0)
            return false;
            
        while(temp > 0) {
            int lastDigit = temp % 10;
            reversedInteger = reversedInteger * 10 + lastDigit;
            temp /= 10;
        } 
        return reversedInteger == x;
    }
};