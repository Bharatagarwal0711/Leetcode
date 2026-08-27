#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26];

        for(char ch: magazine) arr[ch-'a']++;

        for(char ch : ransomNote){
            if(arr[ch-'a']) arr[ch-'a']--;
            else return false;
        }

        return true;
        
    }
};