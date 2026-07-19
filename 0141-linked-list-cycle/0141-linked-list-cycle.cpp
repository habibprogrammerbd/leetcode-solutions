/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* show = head;

        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            show = show->next;
            if(fast == show)
            {
                return true;
            }
        }
        return false;
    }
};