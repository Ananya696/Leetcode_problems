/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        // if(root==NULL)
        //     return NULL;
        // queue<Node*>q;
        // q.push(root);
        // while(!q.empty()){
        //     int size=q.size();
        //     Node* prev=NULL;
        //     for(int i=0;i<size;i++){
        //         Node* newnode=q.front();
        //         q.pop();
        //         if(prev!=NULL){
        //             prev->next=newnode;
        //             prev=prev->next;
        //         }
        //         else
        //             prev=newnode;
        //         if(newnode->left)
        //             q.push(newnode->left);
        //         if(newnode->right)
        //             q.push(newnode->right);
        //     }
        //     prev->next=NULL;
        // }
        // return root;
        if(root==NULL)
            return NULL;
        Node* leftMost=root;
        while(leftMost->left!=NULL)
        {
            Node* Curr=leftMost;
            while(Curr!=NULL){
                Curr->left->next=Curr->right;
                if(Curr->next!=NULL)
                    Curr->right->next=Curr->next->left;
                Curr=Curr->next;
            }
            leftMost=leftMost->left;
        }
        return root;
    }
};