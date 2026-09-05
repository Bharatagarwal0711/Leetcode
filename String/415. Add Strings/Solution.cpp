#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1;
        int j = num2.size()-1;

        int carry = 0;
        string ans = "";

        while(carry || i >= 0 || j >= 0){

            int sum = carry;

            if(i >= 0) sum += num1[i--] - '0'; 
            if(j >= 0) sum += num2[j--] - '0'; 

            if(sum > 9) carry = 1;
            else carry = 0;

            ans.push_back((sum%10) + '0');
        }

        reverse(ans.begin(),ans.end());

        return ans;

    }
};