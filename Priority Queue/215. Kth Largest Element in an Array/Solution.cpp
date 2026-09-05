#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {

    priority_queue<int, vector<int> , greater<int> > pq;

public:
    int findKthLargest(vector<int>& nums, int k) {
        
        for(int ele: nums){

            pq.push(ele);

            if(pq.size() > k) pq.pop();
        }

        return pq.top();

    }
};