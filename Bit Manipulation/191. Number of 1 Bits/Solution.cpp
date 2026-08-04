#include<iostream>
#include<climits>
#include<vector>
using namespace std; 

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while(n){
            count++;
            n = n & (n-1);
        }
        return count;
    }
};