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
    
    void findIn(TreeNode* &root , vector<int> &inorder)
    {
        if(root == NULL) return ;
        
        findIn(root->left , inorder);
        inorder.push_back(root->val);
        findIn(root->right , inorder);
    }
    
    void recover(vector<int> &inorder , TreeNode* &root , int &i)
    {
        if(i==inorder.size() || root==NULL) return ;
        
        recover(inorder , root->left ,i );
        if(inorder[i] != root->val) root->val = inorder[i];
        i++;
        recover(inorder , root->right ,i);
        
        
    }
    
    
    void recoverTree(TreeNode* root) {
        
        vector<int> inorder;
        findIn(root , inorder);
        sort(inorder.begin() , inorder.end());
        int i = 0;
        recover(inorder , root , i);
        
    }
};