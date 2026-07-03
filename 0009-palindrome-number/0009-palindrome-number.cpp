class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        string rev = to_string(x);
        reverse(rev.begin(),rev.end());

        return stol(rev) == x;
    }
};