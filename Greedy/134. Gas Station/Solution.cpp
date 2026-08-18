#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int GasSum = 0;
        int CostSum = 0;

        for(int ele: gas) GasSum += ele;
        for(int ele: cost) CostSum += ele;

        if(CostSum > GasSum) return -1;

        int ans = 0;
        int currGas = 0;

        for(int i=0;i<gas.size();i++){

            currGas = currGas + gas[i] - cost[i];

            if(currGas < 0 ){
                
                ans = i+1;
                currGas = 0;
            
            }
        }

        return ans;
    }
};