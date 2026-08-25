#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int n = nums.size();
        int ans = 0;

        int no0 = 0;

        while(j < n) {

            if(nums[j] == 0)
                no0++;

            while(no0 > k) {
                if(nums[i] == 0) no0--;
                i++;
            }

            ans = max(ans, j - i + 1);
            j++;
        }

        return ans;
    }
};