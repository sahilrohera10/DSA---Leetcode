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
    
    ListNode* getTail(ListNode* list2){
        while(list2->next != NULL){
            list2 = list2->next;
        }
        return list2;
    }
    
    
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* prev = NULL;
        ListNode* cur = list1 ;
        int i = 0;            
           while(i != a){
           
                 prev = cur;
                 cur = cur->next;
                 i++;
               
            }
            while(i != b){
                cout<<cur->val<<" ";
                cur = cur->next; 
                i++;
            }

        prev->next = list2;
             
        ListNode* list2Tail = getTail(list2);
        
        list2Tail->next = cur->next;
        
  
        return list1;

    }
};