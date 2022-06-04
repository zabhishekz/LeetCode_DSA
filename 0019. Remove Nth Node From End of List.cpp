class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * temp = head;
        int len = 0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(len==n){
          ListNode *node=head;
          head=head->next;
          delete node;
          return head;
        }
        int k = len-n;
        temp = head;
        while( temp->next != NULL and k > 1){
            temp = temp->next;
            k--;
        }
        temp->next = temp->next->next;   
        return head;
    }
};