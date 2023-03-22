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
    
    void reversing(TreeNode* &left , TreeNode* &right , int k )
    {
        if(left==NULL) return ;
        if(right == NULL) return ;
        
        if(k%2 != 0) swap(left->val , right->val);
        
        reversing(left->left , right->right , k+1);
        reversing(left->right , right->left , k+1);
    }
    
    
    TreeNode* reverseOddLevels(TreeNode* root) {
         
      reversing(root->left , root->right , 1) ;
        
        return root;
    }
};