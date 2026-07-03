class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> map;
        vector<int> ans(2);

        for(int i=0;i<nums.size();i++){
            int x = target - nums[i];

            if(map.find(x) != map.end()){
                ans[0] = map[x];
                ans[1] = i;
                break;
            }

            map[nums[i]] = i;
        }

        return ans;
    }
};