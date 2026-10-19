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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // if(head->next==NULL)
        //     return NULL;
 
       ListNode* fast=head;
       ListNode* slow=head;
       while(n--){                    //O(n)
        fast=fast->next;
       }
       if(fast==NULL)
        {
            head=head->next;
            delete slow;
        }
        else{
       while(fast->next!=NULL){            //O(sz-n)
        fast=fast->next;
        slow=slow->next;
       }
       ListNode* dummy=slow->next;
       slow->next=slow->next->next;
       delete dummy;
        }
       return head;
    }
};