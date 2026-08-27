#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1;
        int ans = 0;

        while(i>=0){
            if(s[i] != ' ') ans++;
            else if(s[i] == ' ' && ans != 0) break;

            i--;

        }

        return ans;
    }
};