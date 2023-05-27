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
    
//     int find(TreeNode* root)
//     {
//         if(root == NULL)
//         {
//             return 0;
//         }
   
//         return 1+ min(minDepth(root->left) , minDepth(root->right));
     
        
//     }
//       int findMax(TreeNode* root)
//     {
//         if(root == NULL)
//         {
//             return 0;
//         }
   
//         return 1+ max(minDepth(root->left) , minDepth(root->right));
     
        
//     }
    
    
    void find(TreeNode* root , int cnt , int& ans){
        if(root->left == NULL && root->right == NULL){
            cnt++;
            ans = min(cnt , ans);
            return ;
        }
    
        
        cnt++;
        
       if(root->left) find(root->left , cnt , ans);
        
       if(root->right) find(root->right , cnt , ans);
        
        
    }
    
    
    
    
    int minDepth(TreeNode* root) {
        
        if(root == NULL) return 0;
        
        int cnt = 0 ;
        int ans = INT_MAX ;
        
        find(root , cnt ,ans);
        
        return ans ;
        
//         int ans = 0;
//         if(root && (!root->left || !root->right)){
//             ans = findMax(root);
//         }
//       else{
//           ans =  find(root);
//       }
        
        
//      return ans;
        
    }
};