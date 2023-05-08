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
    ListNode* remove(ListNode* &node , ListNode* &head , ListNode*& prev){
        int sum = 0 ;
        ListNode* temp = node;

        while(temp)
        {
            sum = sum + temp->val;
            if(sum==0){
                if(prev==NULL){
                    ListNode* newHead = temp->next;
                    temp->next = NULL;
                    node = newHead;
                    prev = NULL;
                    return newHead;
                }
             
                prev->next = temp->next;
                node = temp->next;
                return head; 
            }
            temp = temp->next;
        }
        prev = node;
        node = node->next;
        return head;
    }
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int> vect;
      
        ListNode* prev = NULL;
        ListNode* node = head;
        ListNode* oldHead = head;
        while(node){
            
                head = remove(node , head , prev);
            //     if(node==head && node != oldHead){
            //         prev=NULL;
            //         oldHead = head;
            //     }
            // else{
                // prev = node ;
                // node = node->next;}
        }
        
      return head;
        
    }
};