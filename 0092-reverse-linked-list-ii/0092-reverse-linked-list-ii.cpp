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
    
      void reverse(ListNode* start , ListNode* end , ListNode* prev){
         ListNode* temp = NULL;
          end->next = NULL;
          cout<<start->val<<" "<<end->val;

          while(start){
            temp = start->next;
            start->next = prev;
            prev = start;
            start = temp;
        }        
    }
    
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* start = head;
        ListNode* end = head;
        ListNode* prev1 = NULL;
        ListNode* after = NULL;
        
    
        int i = 1 , j = 1;
        while(i<left){
            prev1 = start;
            start = start->next;
            i++;
        }
        if(start == head){
            prev1 = NULL;
        }
         while(j<right){
            end = end->next;
            after = end->next;
            j++;
        }
        if(end == head){
            after = end->next;
        }
        
        reverse(start , end , NULL);
        if(prev1){
         prev1->next = end ; 
        }else{
            head = end;
        }
   
        start->next = after;
        
        return head;
        
        
    }
};