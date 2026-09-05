#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {

        int i = 0, j = s.size()-1;

        while(i<j){

            bool char_i = (s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122);
            bool char_j = (s[j] >= 65 && s[j] <= 90) || (s[j] >= 97 && s[j] <= 122);

            if(char_i && char_j) swap(s[i++],s[j--]);
            else if(char_i) j--;
            else i++;

        }

        return s;
        
    }

    
};