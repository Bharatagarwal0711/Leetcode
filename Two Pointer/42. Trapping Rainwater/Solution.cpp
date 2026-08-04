#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        
        int lmax = 0;
        int rmax = 0;

        int i = 0;
        int j = height.size()-1;

        while(i<j){
            lmax = max(lmax,height[i]);
            rmax = max(rmax,height[j]);

            if(lmax<rmax)  ans += lmax - height[i++]; 
            else ans += rmax - height[j--];
        }
        
        return ans;
    }
};