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
    
    void findInorder(TreeNode* root , vector<int> &inorder)
    {
        if(root == NULL) return ;
        findInorder(root->left , inorder);
        inorder.push_back(root->val);
        findInorder(root->right , inorder);
    }
    
    void buildTree(TreeNode* root , vector<int> inorder , int i , int j)
    {
        if(i>j){
            return ;
        }
        
        TreeNode* newNode = new TreeNode(inorder[i]);
        root->right = newNode ;
        
        buildTree(root->right , inorder , i+1 , j);
    }
    
    
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> inorder ;
        findInorder(root , inorder);
        
        TreeNode* d = new TreeNode();
        buildTree(d , inorder , 0 , inorder.size()-1);
        
        return d->right ;
    }
};