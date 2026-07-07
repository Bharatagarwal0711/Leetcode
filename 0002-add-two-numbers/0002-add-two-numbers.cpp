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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode Dummy(0);
        ListNode* temp = &Dummy;

        ListNode* head1 = l1, *head2 = l2;
        int carry = 0;

        while(head1 || head2 || carry){

            int sum = carry;

            if(head1){ 
                sum += head1->val;
                head1 = head1->next;
            }
            if(head2){ 
                sum += head2->val;
                head2 = head2->next;
            }

            carry = sum / 10;
            sum = sum % 10;

            temp->next = new ListNode(sum);
            temp = temp->next;

        }
        return Dummy.next;

    }
};