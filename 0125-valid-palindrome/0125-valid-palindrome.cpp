class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right) {
            // Skips non-alphanumeric characters
            while(left < right && !isalnum(s[left]))
                left++;
            while(left < right && !isalnum(s[right]))
                right--;

            // Compares characters ignoring case
            if(tolower(s[left]) != tolower(s[right]))
                return false;
            left++;
            right--;
        }
        return true;
    }
};
