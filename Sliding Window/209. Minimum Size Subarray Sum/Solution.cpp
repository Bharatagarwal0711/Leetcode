#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        int sum = 0;

        int ans = n+1;

        while(j<n){
            sum += nums[j];

            while(sum >= target){
                ans = min(ans,j-i+1);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        if(ans == n+1) return 0;

        return ans;
        
    }
};