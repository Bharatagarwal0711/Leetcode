#include<iostream>
#include<sstream>
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        int i = 0;
        
        unordered_map<char,string> CtoS;
        unordered_map<string,char> StoC;


        while(ss >> word){
            if(i == pattern.size()) return false;

            if(CtoS.find(pattern[i]) != CtoS.end() && CtoS[pattern[i]] != word  ) return false;

            if(StoC.find(word) != StoC.end() && StoC[word] != pattern[i]  ) return false;

            CtoS[pattern[i]] = word;
            StoC[word] = pattern[i];

            i++;
            
        }

        return i==pattern.size();
    }
};