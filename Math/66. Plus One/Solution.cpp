#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;

        int i = digits.size()-1;
        int carry = 1;

        if(digits[i] + 1 < 10 ){
            digits[i]++;
            return digits;
        }

        while(i>=0){
            
            int num = digits[i] + carry;

            if(num > 9) carry = 1;
            else carry = 0;

            ans.push_back(num%10);
            i--;

        }

        if(carry) ans.push_back(1);

        reverse(ans.begin(),ans.end());
        return ans;
    }
};