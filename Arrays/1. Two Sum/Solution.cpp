#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> arr;

        for(int i=0;i<nums.size();i++){
            int first = nums[i];

            if(arr.find(target-first) != arr.end() )  
                return {i,arr[target-first]};

            arr.emplace(nums[i],i);
            
        }
        return {};
    }
};