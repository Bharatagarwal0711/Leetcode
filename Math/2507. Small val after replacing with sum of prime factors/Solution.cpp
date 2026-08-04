#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int smallestValue(int n) {

        while(n){
            int sum = factorSum(n);
            if(sum == n) return sum;
            n = factorSum(sum);
            
        }
        return 0;
    }
    
    int factorSum(int n){
        int sum = 0;
        for(int i=2;i*i<=n;i++){
            while(n%i == 0){
                sum+=i;
                n /=i;
            }
        }
        if(n>1) sum+=n;

        return sum;
    }
};