#include<iostream>
#include<unordered_map>
using namespace std; 

class Node {
public:
    int val;
    Node *next;
    Node* random;
    Node(int x) : val(x), next(NULL),random(NULL) {}
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node dummy(0);
        Node*temp2 = &dummy;

        Node* temp = head;

        unordered_map<Node*,Node*> mp;

        while(temp){
            Node* node = new Node(temp->val);
            mp[temp] = node;
            temp2->next = node;
            temp2 = node;

            temp = temp->next;
        }

        temp2 = dummy.next;
        temp = head;
        while(temp){
            temp2->random = mp[temp->random];
            temp = temp->next;
            temp2 = temp2->next;
        }

        return dummy.next;
    }
};