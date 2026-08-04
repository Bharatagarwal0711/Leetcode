#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    void FillSieve(vector<bool> &arr){
        for(int i=2;i*i<=arr.size();i++){
            if(arr[i] == 1) continue;
            for(int j=i*i;j<arr.size();j=j+i)  arr[j] = 1;     
        }
    }

    int countPrimes(int n) {
        
        if(n<=2) return 0; 
        int count = 1;

        vector<bool> sieve(n);
        FillSieve(sieve);

        for(int i=3;i<n;i+=2)   if(!sieve[i]) count++;
        
        return count;
    }
};