#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st;

        int i=0, j=0;
        int sum = 0;
        int mx = 0;
        int n = nums.size();

        while(j<n){

            while(st.find(nums[j]) != st.end()) {
                sum -= nums[i];
                st.erase(nums[i]);
                i++;
            }

            st.insert(nums[j]);
            sum += nums[j];

            mx = max(mx, sum);
            j++;

        }

        return mx;

    }
};