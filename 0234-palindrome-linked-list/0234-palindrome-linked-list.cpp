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
    void insert_tail(ListNode*& head, ListNode* &tail, int val) {
        ListNode* newnode = new ListNode(val);
        if (tail == NULL) {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = tail->next;
    }
    void reverse(ListNode*& head, ListNode* tmp) {
        if (tmp->next == NULL) {
            head = tmp;
            return;
        }

        reverse(head, tmp->next);

        tmp->next->next = tmp;
        tmp->next = NULL;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* newhead = NULL;
        ListNode* newtail = NULL;
        ListNode* tmp = head;
        ListNode* ans = head;
        while (tmp != NULL) {
            insert_tail(newhead, newtail, tmp->val);
            tmp = tmp->next;
        }
        reverse(newhead, newhead);
        ListNode* tnp2 = newhead;

        while (ans != NULL && tnp2 != NULL) {
            if (ans->val != tnp2->val) {
                return false;
            }
            ans = ans->next;
            tnp2 = tnp2->next;
        }

        return true;
    }
};