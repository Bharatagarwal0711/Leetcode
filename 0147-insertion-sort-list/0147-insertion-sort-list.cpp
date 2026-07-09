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
    ListNode* insertionSortList(ListNode* head) {

        if(head->next == NULL) return head;

        ListNode* itr = head->next;  // itr Traverse the whole List

        ListNode Dummy(0);
        Dummy.next = head;

        ListNode* end = head;  //
        ListNode* start = head;

        while(itr){
            if(itr->val >= end->val){
                end->next = itr;
                end = end->next;
                itr = itr->next;
            }
            else if(itr->val <= start->val){
                Dummy.next = itr;
                ListNode* temp = itr;
                itr = itr->next;

                temp->next = start;
                start = temp;
            }
            else{
                ListNode* temp = start;
                ListNode* prev = start;

                while(temp!=end && temp->val < itr->val){
                    prev = temp;
                    temp = temp->next;
                }

                prev->next = itr;
                itr = itr->next;
                prev->next->next = temp;
            }

            
        }
        end->next = NULL;
        return Dummy.next;

    }
};