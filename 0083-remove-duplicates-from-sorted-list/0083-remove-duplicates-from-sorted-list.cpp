class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> v;
        ListNode* tmp = head; 
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        while(tmp != NULL)
        {
            v.insert(tmp->val);
            tmp = tmp->next;
        }
        
        for(auto x : v)
        {
            ListNode* num = new ListNode(x);
            curr->next = num;
            curr = curr->next;
        }

        return dummy->next;
    }
};