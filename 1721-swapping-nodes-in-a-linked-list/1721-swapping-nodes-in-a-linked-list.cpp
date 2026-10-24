class Solution {
public:
    int size(ListNode *head)
    {
        ListNode *tmp = head;
        int count = 0;
        while (tmp != NULL)
        {
            count++;
            tmp = tmp->next;
        }
        return count;
    }
    ListNode* swapNodes(ListNode* head, int k) {

        ListNode* tmp1 = head;
        ListNode* tmp2= head;
        int sz = size(head);
        for(int i = 1 ; i < k; i++)
        {
            tmp1 = tmp1->next;
        }
        for(int i = 1 ; i <= sz -k; i++)
        {
            tmp2 = tmp2->next;
        }

        swap(tmp1->val,tmp2->val);

        return head;
    }
};