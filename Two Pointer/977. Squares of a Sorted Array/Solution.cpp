#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int i = 0;
        int j = nums.size()-1;
        int z = nums.size()-1;


        while(z>=0){    
            if(abs(nums[i]) > abs(nums[j])){
                ans[z] = nums[i]*nums[i];
                i++;
            }
            else{
                ans[z] = nums[j]*nums[j];
                j--;
            }
            z--;
        }

        return ans;
    }
};