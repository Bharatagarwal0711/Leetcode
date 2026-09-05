#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long fmax = LLONG_MIN;
        long smax = LLONG_MIN;
        long tmax = LLONG_MIN;

        for(int ele: nums){
            if(ele > fmax){
                tmax = smax;
                smax = fmax;
                fmax = ele;
            }
            else if(ele > smax && ele != fmax){
                tmax = smax;
                smax = ele;
            }
            else if(ele > tmax && ele != fmax && ele != smax) tmax = ele;
        }

        if(tmax == LLONG_MIN) return fmax;
        return tmax;
    }
};