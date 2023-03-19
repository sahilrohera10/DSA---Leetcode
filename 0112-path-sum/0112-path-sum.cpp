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
    
    bool findAns(TreeNode* root , int targetSum)
    {
        if(root == NULL){
            return false;
        }
        
        targetSum = targetSum - root->val;
        if(targetSum == 0 && root->left == NULL && root->right == NULL){
            return true;
        }
        // if(targetSum < 0 ){
        //     return false;
        // }
        
        
        
       if(findAns(root->left , targetSum) == true) return true;
       if(findAns(root->right , targetSum) == true) return true;

        return false;
        
    }
    
    
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        // bool ans = false ;
      return findAns(root , targetSum);
    }
};