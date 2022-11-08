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
    
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* newHead = NULL;
        ListNode* tempHead = NULL;
        ListNode* cur = head->next;
        int sum = 0;
        
     while(cur != NULL){
        
         if(cur->val != 0){
            sum = sum + cur->val;  
         }else{
             if(!newHead){
                   ListNode* n = new ListNode(sum);
	               n->next = newHead;
	               newHead = n;
                 tempHead = newHead; 
             }else{
                ListNode* n = new ListNode(sum);
                 tempHead->next = n;
                 tempHead = tempHead->next;     
             }
              sum = 0 ;
         }
         cur = cur->next;
     }
        
            return newHead;

    }
    
    
};