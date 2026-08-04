#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int mn = INT_MAX;

        for(int i=0;i<prices.size();i++){
            if(prices[i]>mn) ans = max(ans,prices[i]-mn);
            mn = min(prices[i],mn);
        }
        return ans;
    }
};