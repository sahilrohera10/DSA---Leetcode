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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* cur = head ;
        ListNode* curN = head ;
        ListNode* prev = NULL;
        int n = 0;
     
        if(!head || !head->next){
            return head;
        }
        while(curN){
            curN = curN->next;
            n++;
        }
        k = k%n;
        
    while(k--){
        while(cur->next){
            prev = cur ;
            cur = cur->next;
        }
            prev->next = NULL;
            cur->next = head;
            head = cur;
        }
        
        return head;
    }
};