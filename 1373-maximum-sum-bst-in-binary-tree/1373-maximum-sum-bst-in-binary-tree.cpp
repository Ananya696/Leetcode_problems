/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    struct node{
        bool bst;
        int min_val;
        int max_val;
        int total;
    };
    node n={true,INT_MAX,INT_MIN,0};
    struct node bst_sum(TreeNode* root,int &maxs)
    {
        if(root==NULL)
            return n;
        node l,r;
        l=bst_sum(root->left,maxs);
        r=bst_sum(root->right,maxs);
        if(l.bst&&r.bst&&l.max_val<root->val&&r.min_val>root->val)
        {
            maxs=max(maxs,l.total+r.total+root->val);
            return {true,min(l.min_val,root->val),max(r.max_val,root->val),l.total+r.total+root->val};
        }
        else
            return {false,0,0,0};
    }
    int maxSumBST(TreeNode* root) {
        int maxsum=0;
        bst_sum(root,maxsum);
        return maxsum;
    }
};