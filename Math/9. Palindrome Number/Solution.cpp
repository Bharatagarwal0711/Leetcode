#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        reverse(num.begin(),num.end());
        if((long)x == stol(num)) return true;
        return false;
    }
};