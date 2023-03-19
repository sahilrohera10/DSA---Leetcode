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
    
    void findSum(TreeNode* root , int &sum){
        if(root==NULL){
            return ;
        }
        
        findSum(root->left , sum);
        findSum(root->right , sum);
           if(root->left && root->left->left == NULL && root->left->right == NULL){
               sum = sum +root->left->val;
           }

 
    }
    
    
    
    int sumOfLeftLeaves(TreeNode* root) {
        if(root->left == NULL && root->right ==NULL){
            return 0;
        }
         int sum = 0;
         findSum(root , sum);
        
        return sum;
        
    }
};