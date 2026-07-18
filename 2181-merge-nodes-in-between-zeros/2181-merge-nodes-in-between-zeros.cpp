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
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* tmp = head;
        ListNode* newnode = new ListNode(0);
        ListNode* ans = newnode;
        int value = 0;
        while(tmp != NULL)
        {
            value = 0;
            while(tmp->val != 0)
            {
                value = value + tmp->val;
                tmp = tmp->next;
            }
            ListNode* node = new ListNode(value);
            ans->next = node;
            ans = ans->next;
            tmp = tmp->next;
        }
        return newnode->next->next;
    }
};