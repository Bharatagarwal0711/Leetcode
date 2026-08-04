#include<iostream>
#include<climits>
#include<vector>
using namespace std; 

class Solution {
public:
    vector<int> singleNumber(vector<int>& arr) {
        vector<int> ans(2);

        int a = 0;
        for(int ele: arr) a = a^ele;

        long long temp = (long long)a & (-(long long)a);

        for(int ele: arr)  if((temp & ele) == temp) ans[0] ^= ele;

        ans[1] = a^ans[0];
        return ans;

    }
};