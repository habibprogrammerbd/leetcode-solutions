class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* frist = head;
        ListNode* show = head;
        ListNode* curr = head;
        while(frist != NULL && frist->next != NULL)
        {
            frist = frist->next->next;
            show = show->next;

            if(frist == show)
            {
                while(frist != curr)
                {
                    curr = curr->next;
                    frist = frist->next;
                }
                return curr;
            }
        }

        return NULL;
    }
};