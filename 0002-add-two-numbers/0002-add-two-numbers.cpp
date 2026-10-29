class Solution {
public:
   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        int total = 0, carry = 0;
        while(l1 || l2 || carry)
        {
            total = carry;

            if(l1)
            {
                total+=l1->val;
                l1 = l1->next;
            }

            if(l2)
            {
                total+=l2->val;
                l2 = l2->next;
            }


            int sum = total % 10;
            carry = total / 10;
            ListNode* node = new ListNode(sum);
            curr->next = node;
            curr = curr->next;
            
        }
   
        return dummy->next;
    }
};