#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {

        int totalSum = 0;
        for(int ele: nums) totalSum += ele;

        int goal = totalSum - x;

        if(goal < 0) return -1;
        else if(goal == 0) return nums.size();
        
        int i = 0, j = 0, n = nums.size();
        int len = 0, mx = 0;
        int sum = 0;

        while(j < n){

            sum += nums[j];

            while(sum > goal && i<n)  sum -= nums[i++];

            if(sum == goal) len = j-i+1;

            mx = max(len,mx);
            j++;
        }

        if(mx == 0) return -1;
        return n-mx;

    }
};