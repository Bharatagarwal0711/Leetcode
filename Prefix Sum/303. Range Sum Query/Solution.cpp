#include<iostream>
#include<vector>
using namespace std;

class NumArray {
public:
    vector<int> arr;
    NumArray(vector<int>& nums) {
        arr = nums;
        for(int i=1;i<nums.size();i++) arr[i] += arr[i-1];
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return arr[right];
        return arr[right]-arr[left-1];
    }
};