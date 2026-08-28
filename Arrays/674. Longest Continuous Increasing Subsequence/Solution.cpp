#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {

        int mx = 1;
        int len = 1;
        int n = nums.size();

        for(int i=1;i<n;i++){
            if(nums[i] > nums[i-1]) len++;
            else len = 1;

            mx = max(mx,len);
        }

        return mx;

    }
};