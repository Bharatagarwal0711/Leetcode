#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std; 

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n = nums2.size();
        
        stack<int> st;
        unordered_map<int,int> mp;

        int i=n-1;
        while(i>=0){

            while(!st.empty() && nums2[i]>=st.top()) st.pop();

            mp[nums2[i]] = st.empty()? -1:st.top();
            
            st.push(nums2[i]);
            i--;
        }

        for(int i=0;i<nums1.size();i++)  nums1[i] = mp[nums1[i]];
        
        return nums1;
    }
};