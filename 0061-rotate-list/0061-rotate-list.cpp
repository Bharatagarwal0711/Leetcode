/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return NULL;

        int size = 0;
        ListNode* temp = head;
        ListNode* tail = head;

        while(temp){
            tail = temp;
            size++;
            temp = temp->next;
        }

        k = k % size;
        if(k == 0) return head;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = head;

        for(int i=1;i<=k;i++) fast = fast->next;

        while(fast){
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }
        prev->next = NULL;

        tail->next = head;
        return slow;

    }
};