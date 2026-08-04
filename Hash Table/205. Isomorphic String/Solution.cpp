#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> arr(200,0);
        for(int i=0;i<s.size();i++){
            int idx = int(s[i]), val = int(t[i]);
            if(arr[idx] == 0) arr[idx] = val;
            else if(arr[idx]==val) continue;
            else return false;
        }  
        vector<int> brr(200,0);
        for(int i=0;i<t.size();i++){
            int idx = int(t[i]) , val = int(s[i]);
            if(brr[idx] == 0) brr[idx] = val;
            else if(brr[idx]==val) continue;
            else return false;
        }   
        
        return true; 
    }
};