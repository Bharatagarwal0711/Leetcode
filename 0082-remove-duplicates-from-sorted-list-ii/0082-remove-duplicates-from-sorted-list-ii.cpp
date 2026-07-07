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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode Dummy(0);
        ListNode* temp = &Dummy;

        ListNode* slow = head;
        ListNode* fast = head->next;

        int val = head->val;

        while(fast){
            
            if(slow->val != fast->val){
                temp->next = slow;
                temp = temp->next;
                slow = slow->next;
                fast = fast->next;
            }
            else{
                val = slow->val;

                while(fast && slow->val == val){
                    fast = fast->next;
                    slow = slow->next;
                }
            }

        }
        if(slow->val != val) temp->next = slow;
        else temp->next = NULL;
        return Dummy.next;
    }
};