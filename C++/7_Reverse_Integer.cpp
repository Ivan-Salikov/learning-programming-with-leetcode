class Solution {
public:
    int reverse(int x) {
        int result = 0, digit;
        while (x != 0) {
            digit = x % 10;
            if (result < INT_MIN/10 || result > INT_MAX/10) return 0;
            result = (result * 10) + digit;
            x /= 10;
        }
        return result;
    }
};
