class Solution {
public:
int MAX = 2**31 - 1
int MIN = (-2)**31
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > MAX/10 || (rev == MAX / 10 && pop > 7)) return 0;
            if (rev < MIN/10 || (rev == MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};