#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        unordered_map<char,int> s1;

        for(int i=0;i<s.size();i++)  s1[s[i]]++;

        for(int i=0;i<t.size();i++){
            if(s1.find(t[i]) != s1.end()){
                s1[t[i]]--;

                if(s1[t[i]] == 0) s1.erase(t[i]);
            }
            else return false;
        }
        
        return s1.size() == 0;
        
    }
};