#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<bool> arr(52);

        for(char ch: jewels){
            if(ch > 96) arr[(ch-97) + 26] = true;
            else arr[ch-65] = true;
        }

        int count = 0;
        for(char ch: stones){
            if(ch > 96)  count += arr[(ch-97) + 26];
            else count += arr[ch-65];
        }

        return count;
    }
};