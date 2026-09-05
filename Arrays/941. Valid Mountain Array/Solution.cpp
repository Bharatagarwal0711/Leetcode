#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {

        if(arr.size() < 3) return false;

        int n = arr.size(), i = 0, j = n-1;

        while(i+1 < n && arr[i] < arr[i+1]) i++;

        if(i == 0 || i == n-1) return false;

        while(j-1 >= 0 && arr[j] < arr[j-1]) j--;

        if(j == 0 || j == n-1) return false;

        return i == j;

    }
};