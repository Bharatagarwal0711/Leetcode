#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& arr) {
        
        int n = arr.size();

        int idx = 0;
        while(idx<n){
            int correctIdx = arr[idx];
            if(correctIdx>=n) idx++;
            else if(correctIdx == idx) idx++;
            else swap(arr[idx],arr[correctIdx]);
        }
        for(int i=0;i<n;i++)  if(arr[i]!=i) return i;
        
        return n;
    }
};