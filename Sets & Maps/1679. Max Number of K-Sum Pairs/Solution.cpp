#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> s;
        int count = 0;

        for(int ele: nums){
            int diff = k-ele;

            if(s[diff]>0){
                count++;
                s[diff]--;
            }
            else s[ele]++;
        }

        return count;
    }
};