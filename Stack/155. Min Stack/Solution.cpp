#include<iostream>
#include<stack>
using namespace std; 

class MinStack {
public:

    stack< pair<int,int> > st;

    MinStack() {}
    
    void push(int value) {
        if(st.empty()) st.emplace(value,value);
        
        else st.emplace(value,min(value,st.top().second));
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
