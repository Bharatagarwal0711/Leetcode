#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;

        int temp = prices[0];
        
        for(int ele: prices){
            if(ele > temp){
                ans += ele-temp;
                temp = ele;
            }
            else temp = min(ele,temp);
        }

        return ans;
    }
};