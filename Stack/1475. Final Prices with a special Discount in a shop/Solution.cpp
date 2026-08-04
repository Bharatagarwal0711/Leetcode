#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        int n = prices.size();
        stack<int> st;
        
        for(int i=n-1;i>=0;i--){
            
            while(!st.empty() && st.top() > prices[i]) st.pop();

            int val = prices[i];

            prices[i] -= st.empty() ? 0 : st.top();

            st.push(val);
        }

        return prices;

    }
};