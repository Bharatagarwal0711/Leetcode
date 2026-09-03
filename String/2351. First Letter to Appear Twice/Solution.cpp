#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    char repeatedCharacter(string s) {

        bool arr[26];
        int idx;

        for(char ch: s){

            idx = ch-'a';

            if(arr[idx] == true) return ch;
            arr[idx] = 1;
        }

        return 'a';
    }
};