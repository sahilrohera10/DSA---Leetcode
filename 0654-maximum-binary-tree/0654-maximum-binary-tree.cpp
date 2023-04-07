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
    
    int findMax(vector<int> nums , int i , int j){
        int maxi = INT_MIN ;
        int maxIdx = 0 ;

        while(i<=j){
            if(nums[i] > maxi) {
                maxi = nums[i];
                maxIdx = i ;
            }
            i++;
        }
        
        return maxIdx;
        
    }
    
    TreeNode* buildTree(vector<int> nums , int s , int e)
    {
        if(s>e) return NULL;
        
        int maxIdx = findMax(nums , s , e);
        cout<<maxIdx<<" ";
        TreeNode* root = new TreeNode(nums[maxIdx]);
        
        root->left = buildTree(nums, s , maxIdx-1);
        root->right = buildTree(nums, maxIdx+1 , e);
        
        return root;
        
        
    }
    
    
    
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
       TreeNode* newRoot = buildTree(nums , 0 , nums.size()-1);
        
        return newRoot ;
        
        
        
    }
};