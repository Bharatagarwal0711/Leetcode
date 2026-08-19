#include<iostream>
using namespace std;

class Solution {
public:
    bool isBadVersion(int version);
    
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        int ans;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(isBadVersion(mid)){
                ans = mid;
                high = mid-1;
            }
            else  low = mid+1;
            
        }

        return ans;
    }
};