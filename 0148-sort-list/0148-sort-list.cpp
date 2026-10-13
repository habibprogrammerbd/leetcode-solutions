class Solution {
public:
    ListNode* marge(ListNode* &head,ListNode* &mid)
    {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        while(head != NULL && mid != NULL)
        {
            if(head->val <= mid->val)
            {
                curr->next = head;
                head = head->next;
            }
            else
            {
                curr->next = mid;
                mid = mid->next;
            }
            curr = curr->next;
        }

        if(head != NULL)
        {
            curr->next = head;
        }
        if(mid != NULL)
        {
            curr->next = mid;
        }

        return dummy->next;
    }
    ListNode* margeSort(ListNode* &head)
    {
        if(head == NULL || head->next == NULL) return head;
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        ListNode* mid = NULL;
        ListNode* frist = head->next;
        ListNode* slow = head;

        while(frist != NULL && frist->next != NULL)
        {
            frist = frist->next->next;
            slow = slow->next;
        }
        mid = slow->next;
        slow->next = NULL;

        head = margeSort(head); // left
        mid = margeSort(mid); // right

        curr->next = marge(head,mid);

        return dummy->next;

    }
    ListNode* sortList(ListNode* head) {
        return margeSort(head);
    }
};