#include<iostream>
#include<climits>
#include<vector>
using namespace std; 

class Solution {
public:
    int longestSubarray(vector<int>& arr) {

        int maxVal = INT_MIN, count = 0, len = 0;

        for(int ele: arr) maxVal = max(maxVal,ele);
        
        for(int ele: arr){
            if(ele == maxVal){
                len++;
                count = max(count,len);
            }
            else len = 0;
        }
        return count;
    }
};