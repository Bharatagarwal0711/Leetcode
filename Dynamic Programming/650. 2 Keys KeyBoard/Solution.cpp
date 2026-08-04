#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minSteps(int n) {
        
        int count = 0;
        
        for(int i=2;i*i<=n;i++){
            while(n%i==0){
                count += i;
                n /= i;
            }
        }
        if(n>1) count += n;
        return count;
    }
};