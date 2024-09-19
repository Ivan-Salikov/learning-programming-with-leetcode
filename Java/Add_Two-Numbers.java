/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode listHead = new ListNode(0);
        ListNode tail = listHead;
        int nextDigit = 0;

        while (l1 != null || l2 != null || nextDigit != 0){
            int sum = nextDigit;
            if (l1 != null) {
                sum += l1.val;
                l1 = l1.next;
            }
            if (l2 != null) {
                sum += l2.val;
                l2 = l2.next;
            }

            nextDigit = sum / 10;

            tail.next = new ListNode(sum % 10);
            tail = tail.next;
        }
        ListNode result = listHead.next;
        listHead.next = null;
        return result;
    }
}
