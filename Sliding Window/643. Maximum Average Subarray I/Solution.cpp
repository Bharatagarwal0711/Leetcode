#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for(int i=0;i<k;i++) sum += nums[i];

        int mx = sum;
        int j = k;
        int n = nums.size();

        for(int i=1;i<=n-k;i++){

            sum -= nums[i-1];
            sum += nums[j];

            mx = max(sum,mx);
            j++;
        }

        return double(mx)/k;

    }
};