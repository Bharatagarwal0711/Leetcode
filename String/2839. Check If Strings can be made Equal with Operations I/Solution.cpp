#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int i=0, j=0;

        while(i<4){
            if(s1[i] == s2[j]){
                i++;
                j++;
            }
            else{
                if(i+2 < 4){
                    swap(s2[i],s2[i+2]);

                    if(s1[i] != s2[j]) return false;
                    i++;
                    j++;
                }
                else return false;
            }
        }

        return true;

    }
};