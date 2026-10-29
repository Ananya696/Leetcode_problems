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
            ListNode* temp=head;int cnt=0;
            set<ListNode*>s;
            while(temp!=NULL)
            {
                if(s.find(temp)!=s.end())
                    return temp;
                else
                    s.insert(temp);
                temp=temp->next;
            }
            return NULL;
    }
};