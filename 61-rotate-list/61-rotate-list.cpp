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

    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* temp=new ListNode(0);
        temp->next=head;
        ListNode* fast=temp;
        ListNode* slow=temp;
        int n;
        for(n=0;fast->next!=NULL;n++)
        {
            fast=fast->next;
        }
        
        for(int i=n-k%n;i>0;i--)
        {
            slow=slow->next;     
        }
        fast->next=temp->next;
        temp->next=slow->next;
        slow->next=NULL;
        return temp->next;
            
        
        
    }
};