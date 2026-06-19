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
    public ListNode reverseList(ListNode head) {
         if (head == null || head.next == null) {
        return head; // base case
    }

    ListNode newHead = reverseList(head.next); // reverse rest of list
    head.next.next = head; // flip pointer
    head.next = null;      // break old link

    return newHead;
    }
}