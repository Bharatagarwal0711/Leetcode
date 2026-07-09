/*
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

    ListNode* reverseList(ListNode* head){
        ListNode* curr = head, *prev = NULL, *nxt = head->next;

        while(nxt){
            curr->next = prev;
            prev = curr;
            curr = nxt;
            nxt = nxt->next;
        }

        curr->next = prev;

        return curr;
    }

    void reorderList(ListNode* head) {
        if(head->next == NULL) return ;
        ListNode* slow = head, *fast = head, *prev = head;

        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = NULL;
        slow = reverseList(slow);

        ListNode* temp = head;
        ListNode* h1 = head;
        ListNode* h2 = slow;

        while(h1){
            h1 = h1->next;
            temp->next = h2;

            h2 = h2->next;
            temp = temp->next;

            if(h1) temp->next = h1;
            temp = temp->next;
        }

        return;




    }
};