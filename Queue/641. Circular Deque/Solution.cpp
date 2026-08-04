#include<iostream>
#include<vector>
using namespace std; 

class MyCircularDeque {
public:
    vector<int> arr;
    int front,rear;
    int size,capacity;

    MyCircularDeque(int k) {
        arr.resize(k);
        front = rear = -1;
        size = 0;
        capacity = k;
    }
    
    bool insertFront(int value) {
        if(isFull()) return false;
        else if(isEmpty()){
            front = rear = 0;
            arr[0] = value;
            size++;
            return true;
        }
        if(front == 0) front = capacity-1;
        else front--;

        arr[front] = value;

        size++;
        return true;
    }

    bool insertLast(int value) {
        if(isFull()) return false;
        else if(isEmpty()){
            front = rear = 0;
            arr[0] = value;
            size++;
            return true;
        }
        if(rear == capacity-1) rear = 0;
        else rear++;
        arr[rear] = value;
        size++;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()) return false;
        else if(size == 1) rear = front = -1;
        else if(front == capacity-1) front = 0;
        else front++;

        size--;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;
        else if(size == 1) rear = front = -1;
        else if(rear == 0) rear = capacity-1;
        else rear--;
        
        size--;
        return true;
    }
    
    int getFront() {
        if(isEmpty()) return -1;
        return arr[front];
    }
    
    int getRear() {
        if(isEmpty()) return -1;
        return arr[rear];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
};

