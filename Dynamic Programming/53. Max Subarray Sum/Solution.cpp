#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Maxsum = INT_MIN;
        int sum = 0;

        for(int ele: nums){
            sum += ele;
            Maxsum = max(Maxsum,sum);

            if(sum<0) sum = 0;
        }
        return Maxsum;
    }
};