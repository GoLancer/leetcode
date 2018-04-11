/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ret = new ListNode(0);
        ret->next = new ListNode(0);
        ListNode* cur = ret;
        while (l1 != nullptr || l2 != nullptr || cur->next->val != 0  ) {
            cur = cur->next;
            if (l1 != nullptr) {
                cur->val = cur->val + l1->val;
                l1 = l1->next;
            }
            
            if (l2 != nullptr) {
                cur->val = cur->val + l2->val;
                l2 = l2->next;
            }
            
            if (cur->val > 9) {
                cur->val = cur->val % 10;
                cur->next = new ListNode(1);
            } else {
                cur->next = new ListNode(0);
            }
        }
        
        if (cur->next->val == 0) {
            cur->next = nullptr;
        }
        return ret->next;          
    }
};
