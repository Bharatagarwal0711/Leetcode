#include <iostream>
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;

        for(char ch: s) mp[ch]++;

        int count = 0;
        bool flag = false;

        for(auto &[key,value]: mp){
            if(value % 2 == 1){
                count += (value-1);
                flag = true;
            }
            else count += value;
        }

        if(flag) return count+1;
        return count;
        
    }
};