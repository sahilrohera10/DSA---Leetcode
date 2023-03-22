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
    
    int heightLeft (TreeNode* root)
    {
        int lh = 0 ;
        while(root){
            lh++;
            root = root->left;
        }
        
        return lh ;
    }
    
       
    int heightRight (TreeNode* root)
    {
        int rh = 0 ;
        while(root){
            rh++;
            root = root->right;
        }
        
        return rh ;
    }
    
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0 ;
        
        int lh = heightLeft(root);
        int rh = heightRight(root);
        
        if(lh == rh) return (1<<lh)-1 ;     // 1<<lh means -> 2^lh
            
        return 1 + countNodes(root->left) + countNodes(root->right) ;
        
    }
};