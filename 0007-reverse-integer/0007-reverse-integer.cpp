class Solution {
public:
    int reverse(int x) { 
        long long reversedInteger = 0;
        while(x != 0) {
            int lastDigit = x % 10;
            reversedInteger = reversedInteger * 10 + lastDigit;
            if(reversedInteger > INT_MAX || reversedInteger < INT_MIN)
                return 0;
            x /= 10;
        } 
        return reversedInteger;
    }
};