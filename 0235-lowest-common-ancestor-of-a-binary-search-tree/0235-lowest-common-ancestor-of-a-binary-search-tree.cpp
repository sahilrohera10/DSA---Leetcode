/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    TreeNode* findLCA(TreeNode* root , TreeNode* p , TreeNode* q)
    {
        if(root == NULL) return NULL ;
        int cur = root->val;
        if(cur < p->val && cur < q->val) return findLCA(root->right , p , q);
        else if(cur > p->val && cur > q->val) return findLCA(root->left , p , q);
        
        return root;

       
    }
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans = findLCA(root , p ,q) ;
        
        return ans ;
    }
};