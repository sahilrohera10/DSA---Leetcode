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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> temp ;
        
        int i = 0 ;
        while(i<lists.size()){
            while(lists[i]){
                temp.push_back(lists[i]->val);
                lists[i] = lists[i]->next ;
            }
            i++;
        }
        sort(temp.begin() , temp.end());
        ListNode* dummy = new ListNode();
        ListNode* newNode = NULL;
        ListNode* nNew = dummy ;
        for(int i = 0 ; i<temp.size() ; i++){
            newNode = new ListNode(temp[i]);
            nNew->next = newNode;
            nNew = newNode ;
        }
        
        return dummy->next;
    }
};