/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node Dummy(0);
        Node* temp = &Dummy;

        unordered_map<Node*, Node*> mp;

        Node* h1 = head;

        while(h1){
            Node* newNode = new Node(h1->val);
            temp->next = newNode;
            mp[h1] = newNode;
            h1 = h1->next;
            temp = temp->next;
        }

        h1 = head;
        while(h1){
            mp[h1]->random = mp[h1->random];
            h1 = h1->next;
        }

        return Dummy.next;
    }
};




















