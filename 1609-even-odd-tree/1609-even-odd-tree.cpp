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
    
    bool checkForOdd(queue<TreeNode*> q)
    {
        int s = q.size();
        int temp , prev;
        for(int i = 0 ;i<s ; i++){
            temp = q.front()->val;
            q.pop();
            if(temp %2 == 0) return false;        
            if(i>0){         
                if( temp <= prev) return false;
            }
            prev = temp ;
        }
        return true ;
    }
    
    bool checkForEven(queue<TreeNode*> q)
    {
        int s = q.size();
        int temp , prev;
        for(int i = 0 ;i<s ; i++){
            temp = q.front()->val;
             q.pop();
            if(temp %2 != 0) return false;
            if(i>0){
                if(temp >= prev) return false ;
            }
            
            prev = temp ;
        }
        return true ;
    }
    
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level = 0 ;
        if(root->val % 2 == 0) return false;
        while(!q.empty()){
            int s = q.size();
            level++;
            for(int i = 0 ;i < s ;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(level%2 != 0){
                if(checkForEven(q) == false) return false;
            }else{
               if( checkForOdd(q) == false) return false;
            }
        }
        
        return true;
    }
};