#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() > haystack.size()) return -1;
        
        int i = 0;
        int j = 0;
        int idx = 0;

        while(i < haystack.size()){

            bool flag = false;

            if(haystack[i] == needle[j]){
                idx = i;
                flag = true;
                while(i<haystack.size() && j<needle.size() && haystack[i] == needle[j]){
                    i++;
                    j++;
                }
            }

            if(j == needle.size()) return idx;

            else if(flag){
                i = idx + 1;
                j = 0;
            }
            else i++;
        }

        return -1;
    }
};