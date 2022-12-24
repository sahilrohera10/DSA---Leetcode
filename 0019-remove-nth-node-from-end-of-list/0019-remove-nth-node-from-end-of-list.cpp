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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c = 1;
        ListNode* temp = head ;
        if(head->next == NULL){
            return NULL;
        }
        if(head==NULL){
            return head;
        }
        
        int l = 0;
        while(temp){
            temp = temp->next ;
            l++;
        }
        cout<<"len : "<<l;
        temp = head;
        if(l==n){
            return head->next;
        }
        else{
            
      
        while(c<(l-n)){
            temp = temp->next;
            c++;
        }
        
        temp->next = temp->next->next;
              }
        
        return head ;
    }
};