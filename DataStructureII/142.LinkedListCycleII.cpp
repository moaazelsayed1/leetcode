/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
  ListNode *hasCycle(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;

      if (fast == slow) {
        return fast;
      }
    }
    return NULL;
  }
  ListNode *detectCycle(ListNode *head) {
    ListNode *intersection = hasCycle(head);
    if (intersection) {
      ListNode *slow = head;
      while (intersection != slow) {
        intersection = intersection->next;
        slow = slow->next;
      }
    }
    return intersection;
  }
};
