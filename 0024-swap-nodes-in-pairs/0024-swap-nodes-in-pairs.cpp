/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    void swaping(ListNode* cur , int temp ){
        //base case
        if(cur == NULL){
            return;
        }
        
        //recursive case
        temp = cur->val;
        if(cur && cur->next){
        cur->val = cur->next->val;
        cur->next->val = temp ;}
        else{
            return;
        }
    
       // cout<<cur->val<<" "<<temp->val<<" ";
        
        swaping(cur->next->next , 0 );
        
    }
    
    ListNode* swapPairs(ListNode* head) {
        ListNode* cur = head ;
        swaping(cur , NULL);

        return head;
        
    }
};