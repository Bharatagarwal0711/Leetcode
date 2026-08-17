#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int> > st;
        int n = temperatures.size();
        vector<int> ans(n);

        for(int i=n-1;i>=0;i--){
            int count = 0;

            while(!st.empty() && st.top().first <= temperatures[i]){
                count += st.top().second;
                st.pop();
            }            

            if(st.empty()) ans[i] = 0;
            else ans[i] = ++count;


            st.emplace(temperatures[i],count);
        }

        return ans;
    }
};