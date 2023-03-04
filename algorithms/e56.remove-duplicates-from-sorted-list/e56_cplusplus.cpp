
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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head==nullptr ||head->next == nullptr)
        return head;
        
        auto it = head->next, prev = head;
        while(it!=nullptr){
            if(it->val==prev->val){
                prev->next = it->next;
                it->val = 0;
                delete it; 
                it = prev;
            }
            prev = it;
            it = it->next;
        }

        return head;
        
    }
};