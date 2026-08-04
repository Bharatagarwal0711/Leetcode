#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std; 

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_one = 0;
        int mx = 0;
        for(int ele: nums){
            if(ele)  max_one = max(max_one,++mx);
            else mx = 0;
        }
        return max_one;
    }
};