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
    int getDecimalValue(ListNode* head) {
        vector<int> vect;
        
        while(head){
            vect.push_back(head->val);
            head = head->next;
        }
        
        int n = vect.size();
        cout<<n;
        int j = n-1;
        int i = 0 ;
        int ans = 0 ;
        while(j>=0){
            ans = ans + vect[j] * pow(2,i);
            i++;
            j--;
        }
        
        return ans ;
        
    }
};