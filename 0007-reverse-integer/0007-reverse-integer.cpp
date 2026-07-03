class Solution {
public:
    int reverse(int x) {
        int ans = 0;

        while(x){
            int last_digit = x % 10;

            if( (ans > INT_MAX/10) || ( (ans == INT_MAX/10) && (last_digit > 7) ) ) return 0;
            if( (ans < INT_MIN/10) || ( (ans == INT_MIN/10) && (last_digit < -8) ) ) return 0;

            ans = ans*10 + last_digit;
            x /= 10;
        }
        return ans;
    }
};