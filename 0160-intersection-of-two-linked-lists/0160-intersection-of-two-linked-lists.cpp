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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        int ca=0,cb=0;
        while(tempA!=NULL){
            ca++;
            tempA=tempA->next;
        }
        while(tempB!=NULL){
            cb++;
            tempB=tempB->next;
        }
        int diff=abs(ca-cb);
        tempA=headA;
        tempB=headB;
        if(ca>cb)
        {
            while(diff--)
                tempA=tempA->next;
        }
        else if(cb>ca){
            while(diff--)
                tempB=tempB->next;
        }
        
        while(tempA!=tempB)
        {
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return tempA;
    }
};