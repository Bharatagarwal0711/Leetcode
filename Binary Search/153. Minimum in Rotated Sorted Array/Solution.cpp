#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int mn = INT_MAX;

        int low = 0;
        int high = nums.size()-1;
        int mid;

        while(low <= high){
            mid = low + (high-low)/2;

            mn = min(mn,nums[mid]);

            if(nums[low] <= nums[mid]){  // Left Sorted
                mn = min(mn,nums[low]);
                low = mid+1;
            }
            else{ // Right Sorted
                mn = min(mn,nums[high]);
                high = mid-1;
            }
        }

        return mn;
    }
};