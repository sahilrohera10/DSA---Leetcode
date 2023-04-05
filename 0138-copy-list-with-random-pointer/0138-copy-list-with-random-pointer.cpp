/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node* tHead = head ;
        
        Node* dummy = new Node(0);
        Node* newNode = NULL;
        Node* nNew = dummy ;
        map<Node* , Node*> m ;
       
        while(tHead)
        {
            newNode = new Node(tHead->val);
            m[tHead] = newNode ;
            nNew->next = newNode ;
            nNew = newNode;
            tHead = tHead->next;
        }
        
        Node* newHead = dummy->next;
        Node* nHead = newHead ;
        tHead = head ;
        while(tHead && nHead)
        {
            if(tHead->random){
              nHead->random = m[tHead->random] ;
            }
            tHead = tHead->next;
            nHead = nHead->next;
            
        }
        
        
        return newHead ;
    
        
        
        
        
//          while(head && nHead)
//         {int i = 0 ;
//            if(head->random){
//                for( i ; i<nodePair.size() ; i++){
//                    if(nodePair[i].first == head->random->val) break ;
//                }
               
//                nHead->random = nodePair[i].second ;
//            }
             
//              head = head->next ;
//              nHead = nHead->next;
//         }
        
//         return newHead ;
        
        
        
    }
};