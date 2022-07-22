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
    ListNode* partition(ListNode* head, int x) {
        ListNode *le = new ListNode(0);
        ListNode *temp1 = le;
        ListNode *gre = new ListNode(0);
        ListNode *temp2 = gre;
        
        while(head){
            if(head->val < x){
                ListNode *temp = new ListNode(head->val);
                le->next = temp;
                le = temp;
            }else{
                ListNode *temp = new ListNode(head->val);
                gre->next = temp;
                gre = temp;
            }
            head = head->next;
        }
        le->next = temp2->next;
        le = temp1->next;
        return le;
    }
};