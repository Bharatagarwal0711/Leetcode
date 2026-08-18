#include<iostream>
#include<queue>
#include<unordered_map>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        for(int ele: nums) freq[ele]++;

        priority_queue<pair<int,int>> que;

        for(auto [num,count] : freq)  que.emplace(count,num);

        vector<int> ans;

        for(int i=1;i<=k;i++){
            ans.push_back(que.top().second);
            que.pop();
        }

        return ans;
    }
};