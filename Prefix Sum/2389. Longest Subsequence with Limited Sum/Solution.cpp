#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> answerQueries(vector<int>& arr, vector<int>& Q) {
        int n = arr.size();
        int x = Q.size();

        vector<int> res(x);
        sort(arr.begin(),arr.end());

        int temp = 0;
        for(int i=1;i<n;i++)  arr[i] += arr[i-1];

        for(int i=0;i<x;i++){
            int low = 0;
            int high = n-1;

            while(low<=high){
                int mid = low + (high-low)/2;
                if(arr[mid] == Q[i]){
                    res[i] = mid+1;
                    break;
                }
                else if(arr[mid]>Q[i]) high = mid-1;
                else low = mid+1;
            }
            if(low>high) res[i] = high+1;
        }

        return res;
        
    }
};