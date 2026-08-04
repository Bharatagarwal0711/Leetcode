#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i=0;
        vector<int> res;

        while(i<nums.size()){
            int correctIdx = nums[i]-1;
            if(i==correctIdx || nums[i] == nums[correctIdx]) i++;
            else swap(nums[i],nums[correctIdx]);
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] != i+1) res.push_back(nums[i]);
        }
        return res;
    }
};