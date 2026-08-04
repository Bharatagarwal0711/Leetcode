#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        
        int n = satisfaction.size();
        vector<int> sum(n);
        int s = 0;

        for(int i=n-1;i>=0;i--){
            s += satisfaction[i];
            sum[i] = s;
        }

        int idx = -1;
        for(int i=0;i<n;i++){
            if(sum[i]>0){
                idx = i;
                break;
            }
        }
        
        if(idx == -1) return 0;

        s = 0;
        int fact = 1;
        for(int i=idx;i<n;i++) s += satisfaction[i]*fact++;
        
        return s;
    }
};