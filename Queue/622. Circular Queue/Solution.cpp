#include<iostream>
#include<vector>
using namespace std; 

class MyCircularQueue {
public:
    vector<int> arr;
    int front,rear;
    int size,capacity;

    MyCircularQueue(int k) {
        arr.resize(k);
        front = rear = -1;
        size = 0;
        capacity = k;
    }
    
    bool enQueue(int value) {
        if(isFull())  return false;
        
        if(isEmpty()) front = 0;
        if(rear == capacity-1) rear = -1;
        arr[++rear] = value;
        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        
        if(size == 1) front = rear = -1;
        else if(front == capacity-1) front = 0; 
        else front++;

        size--;
        return true;
    }
    
    int Front() {
        if(isEmpty())  return -1;
        return arr[front];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return arr[rear];
    }
    
    bool isEmpty(){
        return (size == 0);
    }
    
    bool isFull(){
        return size == capacity;
    }
};
