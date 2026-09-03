#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {

        unordered_map<string,int> mp;

        for(auto str: words) mp[str]++;
        
        vector<pair<int,string>> arr;

        for(auto &key : mp) arr.emplace_back(-key.second,key.first);

        sort(arr.begin(),arr.end());

        vector<string> ans;

        for(int i=0;i<k;i++) ans.push_back(arr[i].second);

        return ans;
        
    }
};