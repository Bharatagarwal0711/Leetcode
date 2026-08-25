#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int k) {
        int loss = 0;
        int n = customers.size();

        for(int i=0;i<k;i++) loss += grumpy[i]*customers[i];

        int idx = 0;
        int j = k;
        int mx = loss;

        for(int i=1;i<=n-k;i++){
            if(j==n) break;

            loss -= grumpy[i-1]*customers[i-1];
            loss += grumpy[j]*customers[j];

            if(loss > mx){
                mx = loss;
                idx = i;
            }

            j++;
        }

        for(int i=0;i<k;i++) grumpy[idx++] = 0;

        int ans = 0;
        for(int i=0;i<n;i++) if(!grumpy[i]) ans += customers[i];

        return ans;
    }
};