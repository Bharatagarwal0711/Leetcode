#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int mx = 0;

        for(int ele: s){
            if(s.find(ele-1) == s.end()){
                int num = ele;
                int count = 1;

                while(s.find(num+1) != s.end()){
                    count++;
                    num++;
                }
                mx = max(mx,count);
            }
        }

        return mx;
    }
};