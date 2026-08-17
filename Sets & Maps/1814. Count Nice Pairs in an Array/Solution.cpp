#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        long long count = 0;

        unordered_map<int,int> mp;

        for(int ele: nums){

            int key = ele-rev(ele);
            count += mp[key];
            mp[key]++ ;
        }

        return count % (1000000000+7);
    }

    int rev(int n){
        int ans = 0;

        while(n){
            ans *= 10;
            ans += n%10;
            n /= 10;
        }

        return ans;
    }
};