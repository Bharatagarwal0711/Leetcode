#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;

        arr1.push_back(nums[0]), arr2.push_back(nums[1]);

        int n = nums.size();

        int i=0,j=0;

        for(int ele=2;ele<n;ele++){
            if(arr1[i]>arr2[j]){
                arr1.push_back(nums[ele]);
                i++;
            }
            else{
                arr2.push_back(nums[ele]);
                j++;
            }
        }

        for(int ele: arr2) arr1.push_back(ele);

        return arr1;
    }
};