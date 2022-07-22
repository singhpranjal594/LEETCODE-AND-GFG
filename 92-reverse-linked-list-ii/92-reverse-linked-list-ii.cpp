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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        stack<int> st;
        ListNode *cur = head;
        
        int idx = 1; // starting from 1 index
        
        // storing values in stack till roght node.
        while(cur && idx<=right) {
            st.push(cur->val);
            cur = cur->next;
            idx++;
        }
        idx = 1;
        cur = head;
        
        // tracking left Node
        while(idx<left){
            cur = cur->next;
            idx++;
        }
        
        // reassing Node values untill right Node is found
        while(idx<=right) {
            cur->val = st.top();
            st.pop();
            cur = cur->next;
            idx++;
        }
        return head;
    }
};