#include<iostream>
#include<string>
#include<unordered_map>
#include<queue>
using namespace std;


class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char,int> mp;
        for(char ch: s) mp[ch]++;

        priority_queue<pair<int,char>> pq;
        for(auto [ch,num]: mp) pq.emplace(num,ch);

        string ans = "";
        while(!pq.empty()){

            auto [freq,ch] = pq.top();
            while(freq--) ans.push_back(ch);

            pq.pop();
        }

        return ans;
    }
};