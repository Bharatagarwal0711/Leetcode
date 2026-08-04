#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    bool valid(vector<int> &arr,int k,int mid){
        int count = 1;
        int sum = 0;

        for(int i=0;i<arr.size();i++){
            if(sum + arr[i]<= mid)  sum += arr[i];
            else{
                count++;
                if(count>k) return false;
                sum = arr[i];
            }
        }
        return true;
    }

    int splitArray(vector<int> &arr,int k){

        int high = 0, low = 0,ans = -1;

        for(int ele: arr){
            high += ele;
            low = max(low,ele);
        }

        while(low<=high){
            int mid = low + (high-low)/2;

            if(valid(arr,k,mid)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }

        return ans;
    }
};