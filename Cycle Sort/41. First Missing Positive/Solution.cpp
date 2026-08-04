#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        int i = 0;
        while(i<n){
            if(nums[i] <=0 || nums[i] > n ){
                i++;
                continue;
            }

            int correctIdx = nums[i]-1;

            if(nums[correctIdx] == nums[i]) i++;
            else swap(nums[correctIdx],nums[i]);

        }

        for(int i=0;i<n;i++)  if(nums[i] != i+1) return i+1;

        return n+1;
    }
};