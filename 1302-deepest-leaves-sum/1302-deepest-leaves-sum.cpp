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
    int deepestLeavesSum(TreeNode* root) {
        //since we have to go to the deepest level .. so here level order traversal will work.
        if(root==NULL) return 0;
        if(root->left == NULL && root->right==NULL) return root->val;
        
        queue<TreeNode*> q;
        q.push(root);
        int sum = 0;
        int prev=0;
        while(!q.empty())
        {
            int size = q.size();
            if(size) sum = 0;
            for(int i = 0; i<size ; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                
                if(node->left){
            
                    sum = sum +node->left->val;
                    prev = sum ;
                    q.push(node->left);}
                if(node->right) {
                    sum = sum + node->right->val;
                    prev = sum ;
                    q.push(node->right);}
            }
            cout<<"sum=>"<<sum<<" ";
        }
        return prev ;
        
    }
};