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
        ListNode* listHead = new ListNode(0);
        ListNode* tail = listHead;
        int nextDigit = 0;

        while (l1 != 0 or l2 != 0 or nextDigit != 0) {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;

            int sum = x + y + nextDigit;
            int currDigit = sum % 10;
            nextDigit = sum / 10;
            
            ListNode* newNode = new ListNode(currDigit);
            tail -> next = newNode;
            tail = tail -> next;

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;

        }
        ListNode* result = listHead -> next;
        return result;
    }
};
