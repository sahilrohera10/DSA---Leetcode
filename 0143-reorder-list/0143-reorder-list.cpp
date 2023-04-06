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
    
    void reorder(ListNode* &h , ListNode* &midptr , stack<ListNode*> &st)
    {
        if(h==midptr || h == midptr->next){
            // h->next = NULL;
            // cout<<"hello";
            return ;
        }
        ListNode* last = st.top();
        // cout<<last->val<<" ";
        st.pop();
        ListNode* t = st.top();
        t->next = NULL;
        ListNode* n = h->next ;
        h->next = last ;
        last->next = n ;
        cout<<n->val<<" ";
        // h = n;
        
        reorder(n , midptr , st);
        
    }
    
    
    
    
    void reorderList(ListNode* head) {
     
        
        ListNode* midptr = head ;
        ListNode* lastptr = head->next;
        ListNode* h = head ;
        stack<ListNode*> st ;
        
        while(lastptr && lastptr->next){
            midptr = midptr->next;
            lastptr = lastptr->next->next;
        }
        // cout<<"mid=>"<<midptr->val;
        while(h){
            st.push(h);
            h = h->next ;
        }
        h = head ;
        
        reorder(h , midptr , st);
        
        // return head ;
        
    }
};