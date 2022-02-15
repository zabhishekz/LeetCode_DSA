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
    int getDecimalValue(ListNode* head) {
        int ans=0;
        int l = 0;
        ListNode*temp = head;
        while(temp!=NULL){
            l++;
            temp = temp->next;
        }
        int i = 0;
        temp = head;
        while(temp!=NULL){
            ans = ans + ((temp->val)*(pow(2,(l-i-1))));
            temp = temp->next;
            i++;
        }
        return ans;
    }
};


//Recursive Solution
class Solution {
public:
    int out=0;
    int i=0;
    
    void traverse(struct ListNode *p){
        if(p==0)
            return;  
        traverse(p->next);
        out+=p->val*pow(2,i++);
    }

    int getDecimalValue(ListNode* head) {
        traverse(head);
        return out;
    }
};