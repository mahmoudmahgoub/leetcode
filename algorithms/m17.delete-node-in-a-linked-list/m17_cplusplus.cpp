/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
/*
    void deleteNode(ListNode* node) {
        ListNode* prev = NULL;
        while(node->next !=NULL){
            node->val = node->next->val;
            prev = node;
            node = node->next;
        }
        prev->next = NULL;
        
    }
    */
    void deleteNode(ListNode* node) {
        ListNode* todelete = NULL;
            node->val = node->next->val;
            todelete = node->next;
            node->next = node->next->next;
            todelete->next = NULL;
            delete(todelete);
        
    }
};