class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> >  pq;
        ListNode* root = new ListNode();
        ListNode* temp = root;
        
        for(int i = 0; i < n; i++){
            if(lists[i] != NULL)
                pq.push({lists[i]->val, i});
        }
        
        while(!pq.empty()){
            int node = pq.top().second;
            pq.pop();
            root->next = lists[node];
            if(lists[node]->next != NULL){
                lists[node] = lists[node]->next;
                pq.push({lists[node]->val, node});
            }
            root = root->next;                             
        }
        
        root->next = NULL;
        return temp->next;
    }
};