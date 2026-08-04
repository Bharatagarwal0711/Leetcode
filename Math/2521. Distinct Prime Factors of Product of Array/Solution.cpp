#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> st;
        for(int n: nums){
            for(int i=2;i*i<=n;i++){
                while(n%i == 0){
                    st.insert(i);
                    n /= i;
                }
            }
            if(n>1) st.insert(n);
        }
        return st.size();
    }
};