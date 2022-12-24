/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head ;
        ListNode* fast = head ;
        if(head==NULL){
            return NULL;
        }
        if(head->next == NULL){
            return NULL;
        }
        
        int a = 0;
        while(a== 0 || slow != fast){
            a = 1;
              if(slow == NULL || fast == NULL || fast->next == NULL){
                return NULL;
            }
            slow = slow->next;
            fast = fast->next->next;
            
          
        }

        
        slow = head ;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
      
        }
        
        return slow ;
        
    }
};