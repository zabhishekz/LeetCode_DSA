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
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* l3 = new ListNode(0);
        ListNode*temp3 = l3;
        int c = 0;
        while(temp1 != NULL or temp2 != NULL){
            int x = (temp1 != NULL) ? temp1->val : 0;
            int y = (temp2 != NULL) ? temp2->val : 0;
            int sum = x+y+c;
            c = sum/10;
            temp3->next = new ListNode(sum % 10);
            temp3 = temp3->next;
            if (temp1 != NULL) temp1 = temp1->next;
            if (temp2 != NULL) temp2 = temp2->next;
        }
        if (c > 0) {
            temp3->next = new ListNode(c);
        }
        return l3->next;
    }
};