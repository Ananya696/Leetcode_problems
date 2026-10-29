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
    ListNode *detectCycle(ListNode *head) {
            ListNode* slow=head;
            ListNode* fast=head;
            int flag=0;
            while(fast!=NULL && fast->next!=NULL)
            {
                fast=fast->next->next;
                slow=slow->next;
                if(fast==slow)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) return NULL;
            else
            {   slow=head;
                while(fast!=slow)
                {
                    fast=fast->next;
                    slow=slow->next;
                }
            }
        return slow;
    }
};