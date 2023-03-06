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
    ListNode* oddEvenList(ListNode* head) {
        int n = 0 ;
        int i = 1;
        
        vector<int> vect;
        ListNode* h = head;
        while(h){
            if((i%2) !=0)
           { vect.push_back(h->val);}
            n++;
            h = h->next;
            i++;
        }
        if(n==0){
            return head;
        }
        i = 1;
          while(head){
              
            if((i%2) == 0)
          {  vect.push_back(head->val);}
            // n++;
            head = head->next;
              i++;
        }
        
        // cout<<vect.size();
        
        ListNode* newHead = new ListNode(vect[0]);
        ListNode* newNode;
        ListNode* newN = newHead;
        for(int i = 1 ;i<vect.size() ; i++){
           newNode = new ListNode(vect[i]);
            // cout<<"hello"<<" " ;
            newN->next = newNode;
            newN = newNode;
        }
        
        
        return newHead;
        
        
        
    }
};