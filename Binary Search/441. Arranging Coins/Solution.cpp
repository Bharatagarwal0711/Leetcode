#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        int low = 1;
        int high = n;

        while(low<=high){
            long long mid = low + (high-low)/2;

            long long temp = (mid*(mid+1))/2;

            if(temp == n) return mid;
            else if(temp > n) high = mid-1;
            else low = mid+1;
        }

        return high;
    }
};