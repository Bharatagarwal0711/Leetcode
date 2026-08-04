#include<iostream>
#include<vector>
using namespace std; 

class Solution {
public:
    int compress(vector<char>& chars) {

        int idx = 0;  
        int i = 0;

        while(i<chars.size()){
            int count = 0;
            char ch = chars[i];

            while(i<chars.size() && chars[i]==ch){
                count++;
                i++;
            }
            
            chars[idx++] = ch;

            if(count>1){
                string str = to_string(count);
                for(auto num: str) chars[idx++] = num;
            }
        }

        return idx; 
    }
};