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
    bool rootToLeafPathSum(TreeNode* root, int targetSum, int sum){
        if(root == nullptr)
            return false;
        if(root -> left == nullptr && root -> right == nullptr){
            sum = sum + root -> val;
            // cout<<sum;
            if(sum == targetSum)
                return true;   
            else
            {
                // sum=sum-root->val;
                return false;
            }
        }
        bool x= rootToLeafPathSum(root -> left, targetSum, sum + root -> val)  ;  
        cout<<sum<<" ";
        bool y= rootToLeafPathSum(root -> right, targetSum, sum + root -> val);
        return x||y;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        return rootToLeafPathSum(root, targetSum, sum);
    }
};