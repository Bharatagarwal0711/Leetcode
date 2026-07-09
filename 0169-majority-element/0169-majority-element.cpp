class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0;
        int ans;

        for(int ele: nums){
            if(freq == 0) ans = ele;
            if(ans == ele) freq++;
            else freq--;
        }

        return ans;
    }
};