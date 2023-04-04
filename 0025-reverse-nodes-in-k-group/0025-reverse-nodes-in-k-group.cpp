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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cur = head; 
        vector<int> vect;
        
        while(cur){
            vect.push_back(cur->val);
            cur = cur->next;
        }
        
        int n = vect.size();
        int i = 0 ;
        int j = k-1;
        int itr = n/k ;
        cout<<itr;
        int l = 0;
        while(itr --)
        {
             while(j>=i){
                 swap(vect[i] , vect[j]);
                 i++;
                 j--;
             }
            l++;
            
            i = l*k ;
            j = i + k-1;
        }
        
        ListNode* newNode;
        ListNode* nNew = NULL;
        ListNode* dummy = new ListNode();
        nNew = dummy;
        for(int i = 0 ; i< n ;i++){
            newNode = new ListNode(vect[i]);
            nNew->next = newNode;
            nNew = newNode;
        }
        
        return dummy->next;
        
    }
};