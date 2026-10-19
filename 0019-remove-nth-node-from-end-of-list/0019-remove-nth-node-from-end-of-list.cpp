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
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        temp=head;
        if(n==size)
        {
            head=head->next;
            delete temp;
        }
        else{
        int nsize=size-n-1;
        while(nsize--){
            temp=temp->next;
        }
        ListNode* dummy=temp->next;
        temp->next=dummy->next;
        dummy->next=NULL;
        delete dummy;
    }
    return head;
    }
};