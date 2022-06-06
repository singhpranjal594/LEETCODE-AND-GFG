class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL)
            return NULL;
        ListNode *tempa=headA;
        ListNode *tempb=headB;
        while(tempa!=tempb)
        {
            if(tempa==NULL)
            {
                tempa=headB;
            }
            else
            {
                tempa=tempa->next;
            }
             if(tempb==NULL)
            {
                tempb=headA;
            }
            else
            {
                tempb=tempb->next;
            }
        }
        return tempa;
        
    }
};