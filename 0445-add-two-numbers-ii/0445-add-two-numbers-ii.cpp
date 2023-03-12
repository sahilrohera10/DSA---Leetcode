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
    
    ListNode* reverse(ListNode* cur , ListNode* prev){
        ListNode* temp;
        while(cur){
            temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        
        return prev;
    }
   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* h1 = reverse(l1 , NULL);
        ListNode* h2 = reverse(l2 , NULL);
        // return h1;
        
        vector<int> ans ;
        int sum = 0;
        int carry = 0;
        int d = 0;
        while(h1 && h2){
            sum = h1->val + h2->val + carry;
            d = sum%10;
            ans.push_back(d);
            carry = sum/10;
            h1 = h1->next;
            h2 = h2->next;
        }
        
        while(h1){
            sum = h1->val + carry;
            d = sum%10;
            ans.push_back(d);
            carry = sum/10;
            h1 = h1->next;
        }
        while(h2){
            sum = h2->val + carry;
            d = sum%10;
            ans.push_back(d);
            carry = sum/10;          
            h2 = h2->next;
        }
        
        if(carry){
            ans.push_back(carry);
        }
        
        int n = ans.size();
        ListNode* head ;
        ListNode* newNode;
        ListNode* newN ;
        for(int i = 0 ;i<n ;i++){
            if(i==0){
                head = new ListNode(ans[i]);
                newN = head;             
            }else{
                newNode = new ListNode(ans[i]);
                newN->next = newNode;
                newN = newNode;
            }
        }
        
        ListNode* ansHead = reverse(head , NULL);
        return ansHead;
    
        
    }
};