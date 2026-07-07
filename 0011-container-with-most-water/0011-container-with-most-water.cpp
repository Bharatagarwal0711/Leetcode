class Solution {
public:
    int maxArea(vector<int>& height) {
        int stx = 0, endx = height.size()-1;
        int maxWater = 0, water = 0;

        while(endx > stx){
            water =  min(height[stx],height[endx]) * (endx - stx) ;
            maxWater = max(water,maxWater);

            if( height[stx] < height[endx] ) stx++;
            else endx--;
        }

        return maxWater;
    }
};