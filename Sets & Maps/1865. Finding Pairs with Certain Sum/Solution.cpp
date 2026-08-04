#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


class FindSumPairs {
public:

    unordered_map<int,int> map1;
    unordered_map<int,int> map2;

    vector<int> num2;

    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        for(int ele: nums1) map1[ele]++;
        for(int ele: nums2){
            map2[ele]++;
            num2.push_back(ele);
        }
    }
    
    void add(int index, int val) {
        map2[num2[index]]--;
        num2[index] += val;

        map2[num2[index]]++;
    }
    
    int count(int tot) {
        int ans = 0;

        for(auto ele: map1){
            
            int diff = tot-ele.first;

            if(map2.find(diff) != map2.end())  ans += ele.second * map2[diff];
        
        }

        return ans;

    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */