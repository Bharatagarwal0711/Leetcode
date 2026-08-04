#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        unordered_set<int> s;
        
        for(int ele: arr2) s.insert(ele);

        vector<int> not_appear;

        for(int ele: arr1){
            if(s.find(ele) != s.end()) mp[ele]++;
            else not_appear.push_back(ele);
        }

        vector<int> ans;

        for(int ele: arr2){
            while(mp[ele]){
                ans.push_back(ele);
                mp[ele]--;
            }

        }

        sort(not_appear.begin(),not_appear.end());

        for(int ele: not_appear) ans.push_back(ele);
        return ans;
  
    }
};