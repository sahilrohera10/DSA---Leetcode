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
    
    void findSum(TreeNode* root , int &n , int &s){
        if(root==NULL) return ;
        
        n++;
        s = s+root->val ;
        findSum(root->left , n ,s);
        findSum(root->right , n ,s);
        
        // return 
        
    }
    
    void findans(TreeNode* root , int &ans){
        if(root==NULL) return ;
        
        int n = 0 ;
        int s = 0 ;
        findSum(root , n , s) ;
        int val = s/n ;     
        if(root->val == val) ans++;
        
        findans(root->left , ans);
        findans(root->right , ans);
    }
    
  
    
    int averageOfSubtree(TreeNode* root) {
        int ans = 0 ;
        findans(root , ans);
        
        return ans;
    }
};