class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* newList = reverse(head->next);

        head->next->next = head;
        head->next = NULL;

        return newList;
    }
    void reorderList(ListNode* head) {
        ListNode* first = head;
        ListNode* slow = head;

        while(first != NULL && first->next != NULL)
        {
            first = first->next->next;
            slow = slow->next;
        }
        ListNode* second_list = reverse(slow->next);
        slow->next = NULL;

        ListNode* first_list = head;

        while(second_list != NULL)
        {
            ListNode* tmp1 = first_list->next;
            ListNode* tmp2 = second_list->next;

            first_list->next = second_list;
            second_list->next = tmp1;

            first_list = tmp1;
            second_list = tmp2;
        }

    }
};