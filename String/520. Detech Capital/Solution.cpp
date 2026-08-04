#include<iostream>
#include<string>
using namespace std; 

class Solution {
public:
    bool detectCapitalUse(string word) {
        int up = 0;
        for(const char &ch: word) if(isupper(ch)) up++;

        return (up == word.size()) || (up==0) || (up==1 && isupper(word[0]));
        
    }
};
