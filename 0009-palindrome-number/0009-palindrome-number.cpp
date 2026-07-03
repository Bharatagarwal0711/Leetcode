class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        long long num = x;
        long long rev = 0;

        while(num){
            rev *= 10;
            rev += num % 10;
            num /= 10;
        }

        return rev == x;
    }
};