#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int mx = 0;
        int st=0;   

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;

            while(st<s.size() && mp[s[i]] > 1){
                mp[s[st]]--;
                st++;
            }
            mx = max(mx,i-st+1);
            
        }        

        return mx;
    }
};