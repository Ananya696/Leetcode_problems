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
    int max_dia(TreeNode* root,int* maxdia)
    {
        if(root==NULL)
            return 0;
        int lh,rh;
        lh=max_dia(root->left,maxdia);
        rh=max_dia(root->right,maxdia);
        *maxdia=max(*maxdia,lh+rh);
        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        int md=0;
        max_dia(root,&md);
        return md;
    }
};