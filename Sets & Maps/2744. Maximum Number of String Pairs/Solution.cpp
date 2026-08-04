#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string> s;

        int count = 0;

        for(int i=0;i<words.size();i++){
            string temp = words[i];
            reverse(temp.begin(),temp.end());

            if(s.find(temp) != s.end()) count++;

            s.insert(words[i]);
        }

        return count;
        
    }
};