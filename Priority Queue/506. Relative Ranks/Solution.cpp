#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        priority_queue<pair<int,int>> pq;

        int i = 0;
        for(int ele: score){
            pq.emplace(ele,i++);
        }

        vector<string> ans(score.size());

        int rank = 1;

        while(pq.size()){

            int idx = pq.top().second;
            
            if(rank == 1) ans[idx] = "Gold Medal";
            else if(rank == 2) ans[idx] = "Silver Medal";
            else if(rank == 3) ans[idx] = "Bronze Medal";
            else ans[idx] = to_string(rank);

            pq.pop();
            rank++;

        }

        return ans;

    }
};