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
    ListNode* reverseList(ListNode* curr){
        ListNode* tmp;
        ListNode *prev=NULL;
        while(curr){
            tmp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=tmp;
        }
        return prev;
    }
    
    ListNode* findMid(ListNode* slow, ListNode* fast){
        while(fast->next and fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast->next)
            slow=slow->next;
        
        return slow;
    }
    
    
    bool isPalindrome(ListNode* head) {
        ListNode *mid=findMid(head,head);
        
        ListNode *revList=reverseList(mid);
        
        while(head and revList){
            if(head->val!=revList->val)
                return false;
            head=head->next;
            revList=revList->next;
        }
        return true;        
    }
};