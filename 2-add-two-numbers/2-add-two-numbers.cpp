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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* temp=new ListNode(0);
    ListNode* c=temp;
    ListNode* h1=l1;
    ListNode* h2=l2;
    int x,y,carry=0;
    while(h1!=NULL||h2!=NULL)
    {
        if(h1!=NULL)
        x=h1->val;
        else
        x=0;
        if(h2!=NULL)
        y=h2->val;
        else
        y=0;
        int sum =x+y+carry;
        carry=sum/10;
        ListNode * temp1=new ListNode(sum%10);
        c->next=temp1;
        c=c->next;
        if(h1!=NULL)
            h1=h1->next;
        if(h2!=NULL)
            h2=h2->next;
        
    }
        if(carry>0)
        {
            ListNode * temp2=new ListNode(carry);
            c->next=temp2;
        }
        return temp->next;
        
    }
};