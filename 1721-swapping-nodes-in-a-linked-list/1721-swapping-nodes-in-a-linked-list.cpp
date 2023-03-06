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
    ListNode* swapNodes(ListNode* head, int k) {
        int n = 0 ;
        vector<int> vect;
        ListNode* h = head;
        while(h){
            vect.push_back(h->val);
            n++;
            h = h->next;
        }
        
        swap(vect[k-1] , vect[n-k]);
        
        //rebuilding the linkedlist
        ListNode* newNode;
      ListNode* newHead = new ListNode(vect[0]);
  
        ListNode* newN = newHead;
        for(int i = 1 ; i<vect.size() ; i++){
           newNode = new ListNode(vect[i]);
            newN->next = newNode;
            newN = newNode;
            // newN = newNode;
        
        }

        return newHead;
        
    }
};