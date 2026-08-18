#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(p.size()>s.size()) return ans;

        unordered_map<char,int> mp;
        for(char ch: p) mp[ch]++;

        unordered_map<char,int> temp;
        for(int i=0;i<p.size();i++) temp[s[i]]++;

        int i = 0;
        int j = p.size();

        while(j<=s.size()){
            if(temp == mp) ans.push_back(i);

            if(j==s.size()) break;
            
            temp[s[i]]--;
            temp[s[j]]++;

            if(temp[s[i]] == 0 ) temp.erase(s[i]);

            i++;j++;
        }

        return ans;

    }
};