#include<iostream>
#include<vector>
#include<stack>
using namespace std; 

class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 == 1) return false;

        stack<char> st;

        int i=0;
        for(char ch : s){
            if(ch =='(' || ch == '[' || ch =='{') st.push(ch);
            
            else{
                if(st.empty()) return false;

                if(ch-st.top() <=2 && ch-st.top()>=1)  st.pop();
                else return false;
            }
        }

        return (st.empty());
    }
};