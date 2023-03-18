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

    
//     pair<int,int> diameterFast(TreeNode* root){
//         if(root == NULL){
//             pair<int,int> p = make_pair(0, 0);
//             return p;
//         }
        
//         pair<int,int> left = diameterFast(root->left);
//         pair<int,int> right = diameterFast(root->right);
        
//         int l_D = left.first;
//         int r_D = right.first;
        
//  int  h = left.second + right.second ;
        
//         pair<int,int> ans;
//         ans.first = max(l_D , max(r_D,h));
//         ans.second = max(left.second , right.second)+1;

//         return ans;
        
//     }
    
    
    // more optimised approach
   
    int findMax(TreeNode* root , int& maxi){
        if(root==NULL){
            return 0;
        }
        int l = findMax(root->left , maxi);
        int r = findMax(root->right , maxi);
        maxi = max(maxi , l+r);
        
        return max(l , r)+1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        int maxi = 0  ; 
        findMax(root , maxi);
      return maxi;
        
        
        
        
        
    }
};