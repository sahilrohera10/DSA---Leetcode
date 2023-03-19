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
    
    int findSum(TreeNode* root , int sum){
        if(root == NULL){
            return 0;
        }
        
        if(root->val%2==0){
            if(root->left && root->left->left){
                sum = sum + root->left->left->val;
            }
            if(root->left && root->left->right){
                sum = sum + root->left->right->val;
            }
        }
        
        if(root->val%2==0){
            if(root->right && root->right->left){
                sum = sum + root->right->left->val;
            }
            if(root->right && root->right->right){
                sum = sum + root->right->right->val;
            }
        }
        
        return sum + findSum(root->left ,0) + findSum(root->right , 0);
    }
    
    
    int sumEvenGrandparent(TreeNode* root) {
   
        return findSum(root , 0);
        
        
        
    }
};