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
    
    int findAns(TreeNode* root , int &maxi){
        
        if(root == NULL) return 0 ;
        
        
        int l = max(0, findAns(root->left , maxi));
        int r = max(0, findAns(root->right , maxi));
        
        maxi = max(maxi , l+r+root->val);
        
        return root->val + max(l , r);
        
    }
    
    
    int maxPathSum(TreeNode* root) {
    int maxi = INT_MIN ;
     findAns(root , maxi); 
        
    return maxi ;
        
    }
};