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
    int maxPS(TreeNode* root,int &maxps){
        if(root==NULL)
            return 0;
        int lp,rp;
        lp=maxPS(root->left,maxps);
        rp=maxPS(root->right,maxps);
        // total=lp+rp+root->val;
        maxps=max(maxps,lp+rp+root->val);
        return max(0,max(lp,rp)+root->val);
    }
    int maxPathSum(TreeNode* root) {
        int mps=INT_MIN;
        maxPS(root,mps);
        return mps;
    }
};