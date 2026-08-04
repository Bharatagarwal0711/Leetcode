#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int count1 = 0;
    int reversePairs(vector<int>& nums) {
        MergeSort(nums);
        return count1;
    }
    void Pairs(vector<int> &arr , vector<int> &brr){
    int i = 0;
    int j = 0;

    while(i<arr.size() && j<brr.size()){
        if((long long)arr[i] > (long long)2 * brr[j]){
            count1 += arr.size() - i;
            j++;
        }
        else i++;
    }
}

    void Merge(vector<int> &arr1,vector<int> &arr2, vector<int> &res){
        int i=0, j=0, k=0;

        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i]>arr2[j]) res[k++] = arr2[j++];
            else res[k++] = arr1[i++];
        }
        
        while(i<arr1.size()) res[k++] = arr1[i++];
        while(j<arr2.size()) res[k++] = arr2[j++];
    }

    void MergeSort(vector<int> &arr){
        if(arr.size() == 1) return;

        int n1 = arr.size()/2;
        int n2 = arr.size() - n1;

        vector<int> arr1(n1),arr2(n2);

        for(int i=0;i<n1;i++) arr1[i] = arr[i];
        for(int i=0;i<n2;i++) arr2[i] = arr[i+n1];

        MergeSort(arr1);
        MergeSort(arr2);

        Pairs(arr1,arr2);

        Merge(arr1,arr2,arr);

    }
};