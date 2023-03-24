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
    
    void findSum(TreeNode* root , int &sum , int low , int high)
    {
        if(root == NULL) return ;
        
        if(root->val >= low && root->val <= high) sum = sum + root->val;
        
        if(root->val > high) findSum(root->left , sum , low , high);
        
        else if(root->val < low) findSum(root->right , sum , low , high);
        else {
            findSum(root->right , sum , low , high);
            findSum(root->left , sum , low , high);
        }
    }
    
    
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0 ;
        
        findSum(root , sum , low , high);
        
        return sum ;
    }
};