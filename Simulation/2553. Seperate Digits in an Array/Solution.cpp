#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std; 

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        string str;
        for(int ele: nums){
            str = to_string(ele);
            for(char ch : str){
                ans.push_back(ch-'0');
            }
        }
        return ans;
    }
};