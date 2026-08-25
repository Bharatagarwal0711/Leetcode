#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n = nums.size();
        int i=0, j=0;

        long long sum = 0;
        long long ans = 0;

        while(j<n){
            sum += nums[j];

            while(sum * (j-i+1LL) >= k){
                sum -= nums[i];
                i++;
            }

            ans += j-i+1;
            j++;
        }

        return ans;
    }
};