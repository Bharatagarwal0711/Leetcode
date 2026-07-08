class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX;
        int profit = 0;

        for(int ele: prices){
            if(ele > mn) profit = max(profit,ele-mn);
            mn = min(mn,ele);
        }
        return profit;
    }
};