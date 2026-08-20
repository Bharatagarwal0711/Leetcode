#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size() < s1.size()) return false;
        
        unordered_map<char,int> mp;
        for(char ch: s1) mp[ch]++;

        unordered_map<char,int> check;
        for(int i=0;i<s1.size();i++) check[s2[i]]++;


        int j=s1.size();

        for(int i=0;i<=s2.size()-s1.size();i++){


            if(mp == check) return true;

            if(check[s2[i]] == 1) check.erase(s2[i]);
            else check[s2[i]]--;

            if(j==s2.size()) return false;
            check[s2[j++]]++;

        }
        return false;
    }
};