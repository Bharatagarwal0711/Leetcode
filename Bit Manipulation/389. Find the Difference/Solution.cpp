#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int num = 0;

        for(char ch: s) num ^= ch;
        for(char ch: t) num ^= ch;

        return char(num);

    }
};