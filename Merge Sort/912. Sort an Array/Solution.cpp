#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        MergeSort(nums);
        return nums;
    }
    void Merge(vector<int> &arr,vector<int> &brr,vector<int> &res){

        int i = 0 , j = 0 , k = 0;

        while(i<arr.size() && j<brr.size()){
            if(arr[i]<brr[j]) res[k++] = arr[i++];
            else res[k++] = brr[j++];
        }
        if(i==arr.size()){
            while(j<brr.size()) res[k++] = brr[j++];
        }
        if(j==brr.size()){
            while(i<arr.size()) res[k++] = arr[i++];
        }
    }

    void MergeSort(vector<int> &v){

        if(v.size()==1) return;

        int n1 = v.size()/2;
        int n2 = v.size() - n1;

        vector<int> arr1(n1) , arr2(n2);
        for(int i=0;i<n1;i++) arr1[i] = v[i];
        for(int i=0;i<n2;i++) arr2[i] = v[i+n1];

        MergeSort(arr1);
        MergeSort(arr2);

        Merge(arr1,arr2,v);

        arr1.clear();
        arr2.clear();

    }
};