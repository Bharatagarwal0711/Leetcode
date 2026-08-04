#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        unordered_set<int> s;

        for(int ele: arr)  m[ele]++;

        for(auto ele: m) s.insert(ele.second);

        return m.size() == s.size();
        
    }
};