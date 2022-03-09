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
        if(head == NULL || head->next == NULL)
        return head;
    
    ListNode* temp = new ListNode(-1);
    temp->next = head;
        
    ListNode *curr = temp;
    ListNode* pre = temp;
    
    curr = curr->next;
    while(curr && curr->next) {
        
        if(curr->val == curr->next->val) {
            while(curr && curr->next && curr->val == curr->next->val)
                curr = curr->next;
            
            curr = curr->next;
        }
        else {
            pre->next = curr;
            pre = curr;
            curr = curr->next;   
        }
    }
    
    pre->next = curr;
    
    return temp->next;
}
        
    
};