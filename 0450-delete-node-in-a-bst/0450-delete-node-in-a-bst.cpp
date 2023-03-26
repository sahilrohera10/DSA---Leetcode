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
    TreeNode* getLast(TreeNode* root)
    {
        if(root->right == NULL) return root;
        
        return getLast(root->right);
    }
    
    TreeNode* deleteTheNode(TreeNode* root , int k)
    {
        if(root == NULL) return NULL;
        
        if(root->val == k){
            if(root->left == NULL && root->right== NULL) return NULL;
            else if(root->left == NULL && root->right) return root->right;
            else if(root->left && root->right==NULL) return root->left;
            else{
               TreeNode* last = getLast(root->left);
                last->right = root->right;
                return root->left;
            }
        }
        
        if(root->val > k) root->left = deleteTheNode(root->left , k);
        else root->right = deleteTheNode(root->right , k);
        
        return root;
   
    }
  
    TreeNode* deleteNode(TreeNode* root, int key) {
        root = deleteTheNode(root , key);
        return root;
    }
};