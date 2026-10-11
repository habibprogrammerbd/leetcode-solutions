class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        ListNode* dummy = new ListNode(0);
            ListNode* curr = dummy;

        while(head1 && head2)
        {
            if(head1->val > head2->val)
            {
                curr->next = head2;
                head2 = head2->next;
            }
            else
            {
                curr->next = head1;
                head1 = head1->next;
            }
            curr = curr->next;
        }
        if(head1 != NULL) curr->next = head1;
        else curr->next = head2;

        return dummy->next;
    }
};