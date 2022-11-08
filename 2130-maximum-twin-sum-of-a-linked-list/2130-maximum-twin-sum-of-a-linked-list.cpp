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
    
    int pairSum(ListNode* head) {
        vector<int> v;
        int n = 0 ;
        while(head){
            v.push_back(head->val);
            n++;
            head = head->next;
        }
        
        int max = INT_MIN;
        int sum = 0;
        int i = 0;
        while(i<=(n/2)-1){
            sum = v.at(i) + v.at(n-1-i);
            if(sum>max){
                max = sum;
            }
              sum = 0;
            i++;
        }
        
        return max;
   
        
    }
};