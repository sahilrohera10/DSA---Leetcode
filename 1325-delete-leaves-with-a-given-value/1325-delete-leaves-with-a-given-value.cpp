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
    
    TreeNode* removeLeaf(TreeNode* root , int target , bool& ans)
    {
        if(root == NULL)
        {
            return NULL ;
        }
        
        if(root->val == target && (root->left==NULL && root->right==NULL)) 
        {
            ans = true;
            return NULL;
        }
       
        
        root->left = removeLeaf(root->left , target , ans);
        
        root->right = removeLeaf(root->right , target , ans);
        
        return root;
        
        
    }
    
    
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        bool ans = false;
               root =  removeLeaf(root , target , ans);
          // ans = false;
        while( root !=NULL && ans)
        {
            ans = false;
            root = removeLeaf(root , target , ans);
        }
        
        
        
        return root;
        
    }
};