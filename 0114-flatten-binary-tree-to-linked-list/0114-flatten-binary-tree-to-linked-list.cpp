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
    
    void flat1(TreeNode* root , TreeNode* &prev)
    {
        if(root == NULL) return ;
        
        flat1(root->right , prev);
        flat1(root->left , prev);
        
        root->right = prev;
        root->left = NULL;
        prev = root;
        
        
    }
    
    
    void flatten(TreeNode* root) {
        //approach 1 -> consider traversing in Right , Left , Root manner and perform some tasks
        TreeNode* prev = NULL ;
        flat1(root , prev);
        
        // return root;
        
    }
};