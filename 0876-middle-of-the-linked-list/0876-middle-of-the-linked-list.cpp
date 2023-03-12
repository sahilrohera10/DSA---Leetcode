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

    int lenght(ListNode* head){
        int count = 0;
        
        while( head ){
            count ++ ;
            head = head->next;
        }
        
        return count;
        
    }
    
    ListNode* getNode(ListNode* temp , int i){
    // i=i-1;
    while(i--){
        temp = temp->next;
    }
    return temp;
}
    
    ListNode* middleNode(ListNode* head) {
         int l = lenght(head);
        cout<<l<<" ";
        int mid = l/2;

        cout<<"mid:"<<mid<<" ";
        
        ListNode* n = getNode(head ,mid);
        
        return n;
        
    }
};