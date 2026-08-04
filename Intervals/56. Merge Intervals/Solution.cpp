#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        vector<vector<int>> ans;

        for(vector<int> ele: intervals){
            if(ans.empty()) ans.push_back(ele);

            else if(ans.back()[1]>=ele[0]){
                ans.back()[0] = min(ans.back()[0],ele[0]);
                ans.back()[1] = max(ans.back()[1],ele[1]);
            }
            else ans.push_back(ele);
            
        }

        return ans;
    }

};