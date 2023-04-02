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
    ListNode* partition(ListNode* head, int x) {
        vector<ListNode*> temp;
     
        ListNode* cur = head;
        ListNode* prev = NULL;
        if(!head || !head->next) return head;
        
        while(cur){
            if(cur->val < x) {
                prev = cur ;
                cur = cur->next;
            }else{
                temp.push_back(cur);
                if(!prev){
                    head = cur->next;
                    cur = cur->next;
                }else{
                   prev->next = cur->next;
                cur = prev->next;  
                }
               
            }
        }
        
        ListNode* nNode ;  
        if(prev == NULL) {
            prev = temp[0];
            head = prev;
            nNode = prev ;
         int n = temp.size();
        for(int i = 1 ;i< n ; i++){
            nNode->next = temp[i];
            nNode = temp[i];
            nNode->next = NULL;
        }
        
            
        }
        else{
            nNode = prev;
                
        int n = temp.size();
        for(int i = 0 ;i< n ; i++){
            nNode->next = temp[i];
            nNode = temp[i];
            nNode->next = NULL;
        }
        }
        
       
       // cout<<"prev->"<<prev->val;
    
        
        
        return head ;
        
    }
};