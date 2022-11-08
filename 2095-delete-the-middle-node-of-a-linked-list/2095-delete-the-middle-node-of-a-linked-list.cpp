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
    ListNode* deleteMiddle(ListNode* head) {
        int c = 0;
        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* tempHead = head ;
        while(tempHead){
            tempHead = tempHead->next;
            c++;
        }
        
        if(c==1){
            return NULL;
        }
      
        int i = 0;
        while(i != c/2){
            prev = cur;
            cur = cur->next;
            i++;
        }
        
        prev->next = cur->next;
        return head;
        
    }
};