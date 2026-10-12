class Solution {
public:
    ListNode* merge(ListNode* & head1,ListNode* &head2)
    {
        ListNode* tmp1 = head1;
        ListNode* tmp2 = head2;
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        while(tmp1 != NULL && tmp2 != NULL)
        {
            if(tmp1->val <= tmp2->val)
            {
                curr->next = tmp1;
                tmp1 = tmp1->next;
            }
            else
            {
                curr->next = tmp2;
                tmp2 = tmp2->next;
            }
            curr = curr->next;
        }

        if(tmp1 != NULL)
        {
            curr->next = tmp1;
        }

        if(tmp2 != NULL)
        {
            curr->next = tmp2;
        }

        return dummy->next;
    }
    ListNode* mergeSort(ListNode* head)
    {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        if(head != NULL)
        {
            ListNode* frist = head->next;
            ListNode* slow = head;
            while(frist != NULL && frist->next != NULL)
            {
                frist = frist->next->next;
                slow = slow->next;
            }
            ListNode* mid = slow->next;
            slow->next = NULL;
            head = mergeSort(head); // left
            mid = mergeSort(mid); // right

            curr->next = merge(head,mid);
        }
        return dummy->next;
    }
    ListNode* insertionSortList(ListNode* head) {
        return mergeSort(head);
    }
};