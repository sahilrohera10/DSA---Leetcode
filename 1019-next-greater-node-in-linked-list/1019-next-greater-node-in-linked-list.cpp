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
    vector<int> nextLargerNodes(ListNode* head) {
        int n ;
        vector<int> ans;
        while(head){
            ListNode* h = head->next;
            int a = 0;
            while(h){
                if(h->val>head->val){
                    ans.push_back(h->val);
                    a =1;
                    break;
                }
                h = h->next;
                
            }
            if(!a){
                ans.push_back(0);
            }
            head = head->next;
        }
        
        return ans;
        
        
    }
};