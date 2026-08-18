#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:

    void Eval(stack<int> &st,string str){

        int num2 = st.top(); st.pop();
        int num1 = st.top(); st.pop();

        if(str == "+") st.push(num1+num2);
        else if(str == "-") st.push(num1-num2);
        else if(str == "*") st.push(num1*num2);
        else st.push(num1/num2);
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto str: tokens){
            if(str == "+" || str == "-" || str == "*" || str == "/") Eval(st,str);
            else st.push(stoi(str));
        }

        return st.top();
    }
};