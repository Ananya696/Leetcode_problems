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
    ListNode* swapPairs(ListNode* head) {
    ListNode* temp=head;
        int c=0;
        ListNode* dummy;
    while(temp!=NULL && temp->next!=NULL){
            if(c){
                dummy->next=temp->next;
            }
            dummy=temp;
            temp=temp->next;
            dummy->next=temp->next;
            temp->next=dummy;
            if(!c)
                head=temp;
            temp=temp->next->next;
            c++;
        }
         return head;
    }
};