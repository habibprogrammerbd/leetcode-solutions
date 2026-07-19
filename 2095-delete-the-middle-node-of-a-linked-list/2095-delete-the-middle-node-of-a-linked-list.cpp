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
    ListNode* deleteMiddle(ListNode* head) {
        
        int sz = (size(head)/2)-1;
        ListNode* tmp = head;
        if(size(head) == 1)
        {
            head = NULL;
            return head;
        }
        for(int i = 0 ;i< sz ;i++)
        {
            tmp = tmp->next;
        }
        if(tmp->next != NULL)
        {
            tmp->next = tmp->next->next;

        }
        // cout << size(head) ;
        return head;

    }
};