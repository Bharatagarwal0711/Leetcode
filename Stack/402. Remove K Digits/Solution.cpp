#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {

        if( k == num.size()) return "0";

        string str = "";

        for(char ch: num){
            while(str.size() && k && str.back() > ch){
                str.pop_back();
                k--;
            } 
            str.push_back(ch);
        }

        while (k > 0) {
            str.pop_back();
            k--;
        }


        int i = 0;
        while (i < str.size() && str[i] == '0') i++;

        string ans = str.substr(i);

        return ans.empty() ? "0" : ans;

    }
};