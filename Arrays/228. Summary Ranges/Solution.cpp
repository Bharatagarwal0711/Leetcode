#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size() == 0) return {};

        int n = nums.size();
        vector<string> ans;
        int i = 0;
        int j = 0;
        string temp = "";

        while(j<n){

            while(j+1 < n && nums[j]+1 == nums[j+1]) j++;

            if(j < n){

                if(nums[i] == nums[j]) ans.push_back(to_string(nums[i]));
                else{
                    temp = to_string(nums[i]) + "->" + to_string(nums[j]);
                    ans.push_back(temp);
                }
 
                if( j+1 < n) i = j+1;
                j++;
            }

        }

        return ans;
    }
};