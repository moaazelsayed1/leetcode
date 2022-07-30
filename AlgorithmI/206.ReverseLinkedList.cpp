// 8 ms, 8.3 MB	
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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr){
            return head;
        }
        ListNode* node = head->next, *p = nullptr;
        while(head != nullptr){
            head->next = p;
            p = head;
            head = node;
           
            if(node != nullptr){
                node = node->next;
                    
            }
        }
        
        return p;        
        
    }
};
