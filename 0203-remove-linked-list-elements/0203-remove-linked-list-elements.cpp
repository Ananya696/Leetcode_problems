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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL || head->next==NULL && head->val!=val)
            return head;
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* dummy;
        while(temp!=NULL){
            dummy=temp;
            if(dummy->val==val && prev==NULL){
                head=head->next;
                temp=head;
                delete dummy;
                continue;
            }
            else if(dummy->val==val){
                temp=temp->next;
                prev->next=dummy->next;
                dummy->next=NULL;
                delete dummy;
                continue;
            }
            prev=temp;
            temp=temp->next;
        }
    return head;
    }
};