#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int n = arr.size();
        for(int i=0;i<k;i++) sum += arr[i];

        int ans = 0;
        if(sum/k >= threshold) ans = 1;

        int j=k;

        for(int i=1;i<=n-k+1;i++){
            if(j==n) break;

            sum -= arr[i-1];
            sum += arr[j];

            if(sum/k >= threshold) ans++;
            j++;
        }

        return ans;
    }
};