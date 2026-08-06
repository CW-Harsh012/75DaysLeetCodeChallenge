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
         if(head==NULL || head->next==NULL)
        return NULL;
        ListNode*slow=head,*fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            return 1;

        }
        if(fast==NULL || fast->next==NULL)
         return NULL ;

         slow=head;
         while(slow!=fast)
         {
            slow=slow->next;
            fast=fast->next;
         }
         return slow;
    }
};