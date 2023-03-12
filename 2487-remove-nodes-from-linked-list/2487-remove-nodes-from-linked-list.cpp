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
    ListNode* removeNodes(ListNode* head) {
        stack<int> st;
        vector<int> vect;
       int n = 0;
        while(head){
           vect.push_back(head->val);
            head = head->next;
            n++;
        }
      
        
        int num = vect[n-1];
        
        for(int j = n-2 ; j>=0 ; j--){
            if(vect[j] < num){
                vect[j] = 0 ;
            }else{
                num = vect[j];
            }
        }
        // rebuilding the LL
        int v = 0;
        int k = 0;
        ListNode* newHead;
        ListNode* newNode;
        ListNode* newN;
        for(int i = 0 ;i< n ; i++){
            if(vect[i] != 0){
                if(k==0){
                  newHead = new ListNode(vect[i]);
                  newN = newHead;
                    k++;
                }else{
                    newNode = new ListNode(vect[i]);
                    newN->next = newNode;
                    newN = newNode;
                }
            }
        }
        
        return newHead;
        
        
    }
};