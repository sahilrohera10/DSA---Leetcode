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
    
    ListNode* merge(ListNode* left , ListNode* right){
        if(!left){
            return right;
        }
        if(!right){
            return left;
        }
        
        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;
        while(left && right){
            
            if(left->val < right->val){
                ans->next = left;
                ans = left;
                left = left->next;
            }else{
                ans->next = right;
                ans = right;
                right = right->next;
            }
        }
        
        if(left){
            ans->next = left;
            ans = left;
            left = left->next;
        }
        if(right){
            ans->next = right;
            ans = right;
            right = right->next;
        }
        
        ans = temp->next;
        return ans;
 
        
    }
    
    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        return slow;
    }
    
    
    
    ListNode* sortList(ListNode* head) {
        //base case
        if(head==NULL || head->next == NULL){
            return head;
        }
        
        ListNode* mid = findMid(head);
        cout<<mid->val<<" ";
         ListNode* left = head;
         ListNode* right = mid->next;
         mid->next = NULL;
        //recursive case
        left = sortList(left);
        right = sortList(right);
        ListNode* ans = merge(left , right);
        
        return ans;
        
        
    }
};