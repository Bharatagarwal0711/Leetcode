class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx = -1;
        int i=nums.size()-1;

        while(i>0){
            if(nums[i-1]<nums[i]){
                idx = i-1;
                break;
            }
            i--;
        }

        if(idx == -1){
            reverse(nums.begin(),nums.end());
            return;
        }

        sort(nums.begin()+idx+1,nums.end());

        for(int i=idx+1;i<nums.size();i++){
            if(nums[i]>nums[idx]){
                swap(nums[i],nums[idx]);
                break;
            }
        }
        return;
    }
};
