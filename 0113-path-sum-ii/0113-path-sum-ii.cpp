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
    void find(TreeNode* root , int targetSum , vector<vector<int>>& ans , vector<int> temp ){
        if(root==NULL) return ;
        if(root->left == NULL && root->right == NULL){
            if(targetSum - root->val == 0){
                temp.push_back(root->val);
                ans.push_back(temp);
                return;
            }
        }
        
        temp.push_back(root->val);
        // if(targetSum - root->val >= 0)
          find(root->left , targetSum-root->val , ans , temp);
        
        // if(targetSum - root->val >= 0)
        find(root->right , targetSum-root->val , ans , temp);
 
    }
    
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
     
        vector<vector<int>> ans ;
        vector<int> temp ;
        
        find(root , targetSum , ans , temp);
        
        return ans ;
        
    }
};