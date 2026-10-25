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
        unordered_map<ListNode*,int>mp;
        while(tempA!=NULL){
            // if(mp.find(tempA)==mp.end())
                 mp[tempA]=1;
            tempA=tempA->next;
        }
       while(tempB!=NULL)
        {
            if(mp.find(tempB)!=mp.end())
                return tempB;
            tempB=tempB->next;
        }
        return NULL;
    }
};