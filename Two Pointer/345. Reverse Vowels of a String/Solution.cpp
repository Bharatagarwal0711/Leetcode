#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {

        int n = s.size();
        int i = 0, j = n-1;
        char x,y;

        while(i<j){

            x = tolower(s[i]);
            y = tolower(s[j]);

            bool x1 = (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');
            bool y1 = (y == 'a' || y == 'e' || y == 'i' || y == 'o' || y == 'u');

            if(x1 && y1) swap(s[i++],s[j--]);
            else if(x1) j--;
            else i++;
        
        }

        return s;
    }
};