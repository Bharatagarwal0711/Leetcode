#include<iostream>
#include<climits>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {

        vector<long long> ans(nums.begin(),nums.end());

        int Max = INT_MIN;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>Max) Max = nums[i];
            ans[i] += Max;
        }

        for(int i=1;i<nums.size();i++)  ans[i] += ans[i-1];
        
        return ans;
    }
};