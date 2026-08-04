#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        int n = arr.size();
        vector<int> ans(k);

        if(x<=arr[0]){
            for(int i=0;i<k;i++) ans[i] = arr[i];
            return ans;
        }
        else if(arr[n-1]<=x){
            int idx = 0;
            for(int i=n-k;i<n;i++) ans[idx++] = arr[i];
            return ans;
        }

        int low = 0, high = n-1, count = 0, mid = -1;

        while(low<=high){
            mid = low + (high-low)/2;
            if(arr[mid] == x){
                ans[count++] = arr[mid];
                break;
            }
            else if(arr[mid]>x) high = mid-1;
            else low = mid+1;
        }

        if(count == 1){
            low = mid+1;
            high = mid-1;
        } 

        while(high>=0 && low<n && count<k){
            if((x - arr[high]) <= (arr[low]-x))  ans[count++] = arr[high--];
            else ans[count++] = arr[low++];
        }

        if(low==n)  while(count<k) ans[count++] = arr[high--];
        if(high==-1) while(count<k) ans[count++] = arr[low++];


        sort(ans.begin(),ans.end());
        return ans;
        
    }
};