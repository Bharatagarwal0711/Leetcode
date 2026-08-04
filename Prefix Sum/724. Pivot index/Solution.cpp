#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> pre(nums.size());
        vector<int> suf(nums.size());

        int n = nums.size();

        pre[0] = 0;
        suf[n-1] = 0;
        int i = 1,y = n-2;

        while(i<n && y>=0){
            pre[i] = pre[i-1] + nums[i-1];
            suf[y] = suf[y+1] + nums[y+1];
            i++,y--;
        }
        
        for(int i=0;i<nums.size();i++) if(suf[i]==pre[i]) return i;
        
        return -1;
    }
};