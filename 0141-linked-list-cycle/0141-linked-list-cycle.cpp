class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* frist = head;
        ListNode* show = head;

        while(frist != NULL && frist->next != NULL)
        {
            frist = frist->next->next;
            show = show->next;

            if(frist == show)
            {
                return true;
            }
        }

        return false;
    }
};