#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string str1 = "";
        string str2 = "";

        for(char ch: s){

            if(ch == '#' && str1.empty()) continue;
            else if(ch == '#')  str1.pop_back();
            else str1.push_back(ch);
        }

        for(char ch: t){

            if(ch == '#' && str2.empty()) continue;
            else if(ch == '#')  str2.pop_back();
            else str2.push_back(ch);
        }

        return str1 == str2 ;


    }
};