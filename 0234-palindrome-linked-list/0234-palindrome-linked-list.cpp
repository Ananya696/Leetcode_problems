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
    bool isPalindrome(ListNode* head) {
      ListNode* slow=head;
      ListNode* fast=head;
      while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
      }
      ListNode* temp=slow->next;
      ListNode* prev=NULL;
      while(temp!=NULL){
        ListNode* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
      }
      slow->next=prev;
     temp=slow->next;
     ListNode* dummy=head;
     while(temp!=NULL)
     {
        if(dummy->val==temp->val)
        {
            dummy=dummy->next;
            temp=temp->next;
        }
        else
            return false;
     }
     return true;
    }
};