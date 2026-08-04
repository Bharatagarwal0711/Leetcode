#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        if(s.empty()) return s;
        reverse(s.begin(),s.end());

        string ans = "";

        int i=0;
        while(i<s.size()){

            while(i<s.size() && s[i] == ' ') i++;

            string word = "";
            while(i<s.size() && s[i]!= ' '){
                word += s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.size()>0) ans += " " + word;
        }
        
        ans.erase(0,1);
        return ans;
    }
};


