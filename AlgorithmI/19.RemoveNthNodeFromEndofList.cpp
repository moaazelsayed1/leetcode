// 	9 ms, 10.8 MB
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* front = new ListNode(0, head);
        ListNode* back= new ListNode(0, head);
         int cn = n + 1;
        while(cn-- && front != nullptr){
            front = front->next;
        }
        
        while(front != nullptr){
            front = front->next;
            back = back->next;
        }
        
        
        if(back->next != nullptr && back->next != head){
            back->next = back->next->next;
        }else if(back->next == head){
            head = head->next;
        }
        else{
            return nullptr;
        }
        
        return head;
        
    }
};
