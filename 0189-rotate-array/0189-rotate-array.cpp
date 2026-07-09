class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        k = k % n;

        Rev(nums,0,n-k-1);
        Rev(nums,n-k,n-1);
        Rev(nums,0,n-1);

    }
    void Rev(vector<int> &ans,int stx,int endx){
        while(stx<endx) swap(ans[stx++],ans[endx--]);
    }
};