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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        for(ListNode* tmp1 = headA; tmp1 != NULL ; tmp1 = tmp1->next)
        {
            for(ListNode* tmp2 = headB ; tmp2 != NULL ; tmp2 = tmp2->next)
            {
                if(tmp1 == tmp2)
                {
                    return tmp1;
                }
            }
        }
        return NULL;
    }
};