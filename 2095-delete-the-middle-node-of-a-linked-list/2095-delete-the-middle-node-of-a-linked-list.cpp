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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * temp=head;
        int c=0;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        int size=floor(c/2)-1;
        if(c==1)
            return NULL;
        temp=head;
        while(size--){
            temp=temp->next;
        }
        ListNode* dummy=temp->next;
        temp->next=temp->next->next;
        dummy->next=NULL;
        delete dummy;
        return head;
    }
};