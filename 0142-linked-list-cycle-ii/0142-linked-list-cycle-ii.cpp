class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* frist = head;
        ListNode* show = head;
        bool cycle = false;
        while(frist != NULL && frist->next != NULL)
        {
            frist = frist->next->next;
            show = show->next;

            if(frist == show)
            {
                cycle = true;
                break;
            }
        }

        if(!cycle) return NULL;

        // ListNode* CycleremoveNode = NULL;
        show = head;

        while(frist != show)
        {
            show = show->next;
            // CycleremoveNode = frist;
            frist = frist->next;
        }
        // CycleremoveNode->next = NULL; // remove Cycler

        return frist;
    }
};