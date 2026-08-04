#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1);

        int n = nums.size();
        int temp = 1;

        for(int i=0;i<n;i++){
            ans[i] = temp;
            temp *= nums[i];
        }

        temp = 1;

        for(int i=n-1;i>=0;i--){
            ans[i] *= temp;
            temp *= nums[i];
        }
        
        return ans;
        
    }
};
