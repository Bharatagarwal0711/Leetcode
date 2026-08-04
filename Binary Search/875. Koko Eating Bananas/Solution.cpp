#include <iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:

    long long check(int mid,vector<int>& piles, int h){
        long long count = 0;
        int n = piles.size();
        int m = mid;

        for(int i=0;i<n;i++){
            if(piles[i] % m == 0) count += (piles[i]/m);
            else count += (piles[i]/m) + 1;
        }

        return count;
        
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = INT_MIN;
        for(int i=0;i<n;i++) if(piles[i]>high) high = piles[i];

        int ans = high;

        while(low<=high){
            int mid = low + (high-low)/2;
            if(check(mid,piles,h)<=h){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }

        return ans;
        
    }
};