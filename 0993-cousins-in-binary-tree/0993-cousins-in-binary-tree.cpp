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
    
    void find(TreeNode* root , int val , pair<int , int>&p , int l)
    {
        if(root==NULL) return ;
        
        if(root->left &&  root->left->val == val )
        {
            p.first = root->val;
            p.second = l+1;
            return ;
        }
        if(root->right && root->right->val == val)
        {
            p.first = root->val;
            p.second = l+1;
            return ;
        }
        
        find(root->left , val , p ,l+1);
        
        find(root->right , val , p , l+1);
    }
    
    
    bool isCousins(TreeNode* root, int x, int y) {
     
        pair<int , int> p1,p2;
        
        find(root , x, p1 , 0);
        find(root , y , p2 , 0);
        
        if((p1.first != p2.first) && p1.second == p2.second) return true;
        
        
        return false;
    }
};