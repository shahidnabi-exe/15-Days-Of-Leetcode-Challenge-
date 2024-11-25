class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        int orignal = x;
        int reverse = 0;
        while (x != 0) {
            int lastdigit = x % 10;
            x = x / 10;
            if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && lastdigit > 7)) return 0;
            if (reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && lastdigit < -8)) return 0;
            reverse =  (reverse * 10) +  lastdigit;
        }
        if (reverse == orignal) {
            return true;
        } else 
          return false;
    }
};
