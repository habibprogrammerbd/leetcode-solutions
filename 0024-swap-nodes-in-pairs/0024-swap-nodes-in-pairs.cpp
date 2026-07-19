/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (head == NULL)
        {
            return head;
        }
        ListNode *tmp = head;
        ListNode *node = new ListNode(0);
        ListNode *ans = node;
        while (tmp != NULL && tmp->next != NULL)
        {

            ListNode *s_node = new ListNode(tmp->next->val);
            ans->next = s_node;
            ans = ans->next;

            ListNode *f_node = new ListNode(tmp->val);
            ans->next = f_node;
            ans = ans->next;

            tmp = tmp->next->next;
        }
        if(tmp != NULL)
        {
            ListNode *p_node = new ListNode(tmp->val);
            ans->next = p_node;

        }

        return node->next;
    }
};