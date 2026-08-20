#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int i = 0, j = nums.size()-1;
        int sum = 0;
    

        while(i<j){
            sum = nums[i] + nums[j];

            if(sum == target) break;
            else if(sum > target) j--;
            else i++;
        }

        return {i+1,j+1};
    }
};