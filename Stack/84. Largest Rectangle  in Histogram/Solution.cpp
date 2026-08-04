#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();
        vector<int> nxtSmaller(n),prevSmaller(n);

        int mx = 0;

        stack<pair<int,int> > st,st2;

        // Next Smaller Element Index
        for(int i=n-1;i>=0;i--){
            
            while(!st.empty() && st.top().first >= heights[i]) st.pop();

            if(st.empty()) nxtSmaller[i] = n;
            else nxtSmaller[i] = st.top().second;

            st.emplace(heights[i],i);
            
        }

        // Previous Smaller Element Index
        for(int i=0;i<n;i++){

            while(!st2.empty() && st2.top().first >= heights[i]) st2.pop();

            if(st2.empty()) prevSmaller[i] = -1;
            else prevSmaller[i] = st2.top().second;

            st2.emplace(heights[i],i);

        }

        for(int i=0;i<n;i++){
            int temp = (nxtSmaller[i] - prevSmaller[i] - 1 ) * heights[i];
            mx = max(mx,temp);
        }

        return mx;

    }
};