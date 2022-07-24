// 0 ms, 	7.2 MB
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
  ListNode *middleNode(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != nullptr && fast->next != nullptr) {
      fast = fast->next->next;
      slow = slow->next;
    }
    return slow;
  }
};
