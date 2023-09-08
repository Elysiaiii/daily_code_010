

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool hasCycle(struct ListNode* head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast && fast->next)
    {
        fast = fast->next;
        if (fast) fast = fast->next;
        if (fast == slow) return true;
        slow = slow->next;
    }
    return false;
}// 快慢指针，若有环两个指针会相遇（追及问题）