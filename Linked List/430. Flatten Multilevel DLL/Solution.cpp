#include<iostream>
using namespace std; 

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

class Solution {
public:
    Node* flatten(Node* head) {

        if(head == NULL) return head;

        Node* curr = head;
        while(curr){
            
            if(curr->child == NULL) curr = curr->next;
            else{
                Node* nxt = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child = NULL;

                while(curr->next) curr = curr->next;
                curr->next = nxt;
                if(nxt) nxt->prev = curr; 
                curr = nxt;
            }
        }
        
        return head;

    }
};