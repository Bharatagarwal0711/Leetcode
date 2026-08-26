#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int maxVowels(string str, int k) {
        string vowels = "aeiou";

        int count = 0;
        for(int i=0;i<k;i++) if(vowels.find(str[i]) != string::npos) count++;

        int j = k;
        int ans = count;
        int n = str.size();
        
        for(int i=1;i<=n-k;i++){

            if(vowels.find(str[i-1]) != string::npos) count--;
            if(vowels.find(str[j]) != string::npos) count++;
            
            ans = max(ans,count);
            j++;
        }   

        return ans;

    }
};