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
    
     void insertAtHead(ListNode*& newCur , int sum){
        ListNode* n = new ListNode(sum);
	    n->next = newCur;
	    newCur = n;
    }
    
    ListNode* getTail(ListNode* newCur){
    while(newCur->next != NULL){
        newCur = newCur->next ;
    }

    return newCur;
}
    
    
    void insertAtTail(ListNode*& newCur , int sum){
       if(newCur == NULL){
       insertAtHead(newCur , sum);
       return ;
  }

        ListNode* tail = getTail(newCur);
        ListNode* n = new ListNode(sum);
        tail->next = n; 
    }
    
   
    
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        
        int carry =  0;
        int sum = 0 , digit = 0;
        
        ListNode* cur1 = l1;
        ListNode* cur2 = l2;
        
        ListNode* newCur = NULL;
        
        while(cur1 != NULL && cur2 != NULL){
            
                
            sum = cur1->val + cur2->val + carry;
                digit = sum%10;
                carry = sum/10;
                
//                 if(!newCur){
//                     insertAtHead(newCur , digit);
//                     cur1 = cur1->next;
//                     cur2 = cur2->next;
//                     continue;

//                 }
                    insertAtTail(newCur , digit);
                    cur1 = cur1->next;
                    cur2 = cur2->next;
                   
                
        }
        //first ll has exhausted 
        
        while(cur2 != NULL){
            sum = cur2->val + carry ;
            digit = sum%10;
            carry = sum/10;
            insertAtTail(newCur , digit);
            cur2 = cur2->next;
        }
        
          //second ll has exhausted 
        while(cur1 != NULL){
            sum = cur1->val + carry ;
            digit = sum%10;
            carry = sum/10;
            insertAtTail(newCur , digit);
            cur1 = cur1->next;
        }
        
        if(carry){
            insertAtTail(newCur , carry);
        }
        
        return newCur ;
        
   
        
        
    }
};