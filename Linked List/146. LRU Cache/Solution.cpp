#include<iostream>
#include<unordered_map>
using namespace std;


class LRUCache {
public:
    class Node {
    public:
        int key, value;
        Node *next, *prev;

        Node(int k, int v) {
            key = k;
            value = v;
            next = prev = nullptr;
        }
    };

    Node *head, *tail;
    unordered_map<int, Node*> mp;
    int cap;

    LRUCache(int capacity) {
        cap = capacity;

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (mp.find(key) == mp.end()) return -1;

        Node* node = mp[key];

        removeNode(node);
        addToFront(node);

        return node->value;
    }

    void put(int key, int value) {

        // Key already exists
        if (mp.find(key) != mp.end()) {
            Node* node = mp[key];
            node->value = value;

            removeNode(node);
            addToFront(node);
            return;
        }

        // Create new node
        Node* node = new Node(key, value);
        mp[key] = node;
        addToFront(node);

        // Capacity exceeded
        if (mp.size() > cap) {
            Node* lru = tail->prev;

            removeNode(lru);
            mp.erase(lru->key);
            delete lru;
        }
    }

    // Remove a node from its current position
    void removeNode(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    // Insert node just after head (Most Recently Used)
    void addToFront(Node* node) {
        node->next = head->next;
        node->prev = head;

        head->next->prev = node;
        head->next = node;
    }

};