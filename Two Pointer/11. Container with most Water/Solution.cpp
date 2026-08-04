#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int Maxwater = 0;

        int i=0, j=height.size()-1;
        while(i<j){
            int water = min(height[i],height[j]) * (j-i);
            Maxwater = max(Maxwater,water);

            if(height[i]<height[j]) i++;
            else j--;

        }
        return Maxwater;
    }
};