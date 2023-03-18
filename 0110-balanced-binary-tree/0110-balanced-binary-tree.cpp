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
    
    //TC -> O(n^2)
    
//     int height(TreeNode* root){
//         if(root==NULL){
//             return 0;
//         }
        
//         int l = height(root->left);
//         int r = height(root->right);
        
//         return max(l , r) + 1;
//     }
    
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        
        int l = height(root->left);
        if(l== -1) return -1;
        int r = height(root->right);
        if(r== -1) return -1;
        
        if(abs(l-r)>1) return -1;
        
        return max(l , r) + 1;
    }
    
    
    
    bool isBalanced(TreeNode* root) {
        
        if(height(root) == -1){
            return false;
        }else{
            return true;
        }
        
        
        
        
//         if(root == NULL){
//             return true;
//         }
        
        
        
//         bool left = isBalanced(root->left);
//         bool right = isBalanced(root->right);
        
//         int l = height(root->left);
//         int r = height(root->right);
        
//         if(abs(l-r)<=1 && left && right){
//             return true;
//         }
        
        
        
        
//         return false;
        
        
        
        
        
        
        
        
    }
};