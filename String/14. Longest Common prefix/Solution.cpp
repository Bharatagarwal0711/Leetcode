#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<string> z = strs;
        sort(z.begin(),z.end());
        string First = z[0];
        string Second = z[z.size()-1];

        string x = "";
        for(int i=0;i<min(First.length(),Second.length());i++){
            if(First[i]==Second[i]){
                x += First[i];
            }
            else break;
        }
        return x;
    }
};