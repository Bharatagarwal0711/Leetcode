#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0, j = 0;
        int n = nums.size();
        int ans = 0;
        int noz = 0;

        while(j<n){

            if(nums[j] == 0) noz++;

            while(noz > 1){

                if(nums[i] == 0) noz--;
                i++;

            }         

            ans = max(ans,j-i+1);
            j++;
        }

        return ans-1;
    }
};