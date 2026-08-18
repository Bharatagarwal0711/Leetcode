#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;

        for(int i=1;i<nums.size();i++) nums[i] += nums[i-1];

        unordered_map<int,int> arr;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == k) count++;

            if(arr.find(nums[i]-k) != arr.end() )  count += arr[nums[i]-k];

            if(arr.find(nums[i]) == arr.end()) arr[nums[i]] = 1;
            else arr[nums[i]]++;
        }
        return count;

    }
};