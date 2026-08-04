#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> arr(26);

        for(char ch: s){
            arr[ch-'a'] ++;
        }

        for(int i=0;i<s.size();i++){
            if(arr[s[i]-'a'] == 1) return i;
        }
        return -1;
    }
};