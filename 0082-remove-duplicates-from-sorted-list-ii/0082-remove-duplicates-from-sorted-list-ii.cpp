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
    
    // void remove(ListNode* &cur , ListNode* &prev){
    //     prev->next = cur->next->next;
    //     cur = cur->next->next;
    // }
    
    
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head){
            return head;
        }
        vector<int> v ;
        ListNode* x = head ;
        while(x){
            v.push_back(x->val);
            x = x->next;
        }
        
        map<int , int> m ;
        for(int i = 0 ;i < v.size() ; i++){
            m[v[i]]++;
        }
        // v.clear();
        // cout<<v[0];
        vector<int> vect;
       
        for(auto x : m){
            if(x.second == 1){
                cout<<"hi";
              vect.push_back(x.first);
            }
        }
        if(vect.size() == 0){
            return NULL;
        }
        // cout<<v[0]<<" ";
        ListNode* newNode;
        ListNode* newHead = new ListNode(vect[0]);
        ListNode* newN = newHead;

        
        for(int i = 1 ;i < vect.size() ; i++){
            newNode = new ListNode(vect[i]);
            newN->next = newNode;
            newN = newNode;
            
        }
        
        return newHead;
        
//         ListNode* h = head ;
//         ListNode* prev = NULL;
//         ListNode* cur = head;
        
//         while(h->next){
//             if(cur->val == cur->next->val){
//                 remove(cur , prev);
//             }
//            h = h->next;
//         }
        
        
//         return head;
         
        
    }
};