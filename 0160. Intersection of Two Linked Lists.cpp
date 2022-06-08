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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL or headB == NULL){
            return NULL;
        }
        ListNode *ptr1 = headA;
        ListNode *ptr2 = headB;
        int cnt1 = 0;
        int cnt2 = 0;
        while(ptr1 != NULL){
            ptr1 = ptr1->next;
            cnt1++;
        }
        while(ptr2 != NULL){
            ptr2 = ptr2->next;
            cnt2++;
        }
        int d = cnt2-cnt1;
        if(d<0){
            d = (-1)*d;
        }
        ptr1 = headA;
        ptr2 = headB;
        if(cnt1 >= cnt2){
            while(d > 0){
                ptr1 = ptr1->next;
                d--;
            }
        }
        else{
            while(d > 0){
                ptr2 = ptr2->next;
                d--;
            }
        }
        while(ptr1 != NULL and ptr2 != NULL){
            if(ptr1 == ptr2){
                return ptr1;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        
        return NULL;
    }
};