#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    bool check(long long mid,vector<int>& time, int totalTrips){
        long long trips = 0;
        for(int ele: time) trips += mid/(long long)(ele);

        return (trips >= totalTrips);
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        long long mx = -1;
        for(int ele: time) mx = max(mx,(long long)(ele));
        long long low = 1;
        long long high = mx*totalTrips;

        long long ans = 0;

        while(low<=high){
            long long mid = low+(high-low)/2;

            if(check(mid,time,totalTrips)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
   
};