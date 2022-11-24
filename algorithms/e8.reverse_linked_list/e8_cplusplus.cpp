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
    
    //Iterative: time O(n), space O(1)
    /*
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=nullptr;
        ListNode* next=nullptr;
        while(curr!=nullptr)
        {
            next= curr->next;
            curr->next=prev;
            prev = curr;
            curr=next;
        }
        
        return prev;
        
    }*/
    
    //Recursive: time O(n), space O(n)
    ListNode* reverseList(ListNode* head) {
        
        if( head==nullptr || head->next==nullptr ) //note shortcircuit will matter here 
            return head;
        else
        {
          ListNode* newhead = reverseList(head->next);
           head->next->next=head;
            head->next=nullptr;
            return newhead;
        }
    }
    
    
    //iterative but with stack: time O(n), space O(n)
    /*
    ListNode* reverseList(ListNode* head) {
        ListNode* itr=head;
        stack<int> vals;
        while(itr!=nullptr)
        {
            vals.push(itr->val);
            itr=itr->next;
        }
        itr=head;
        
        while(itr!=nullptr)
        {
           itr->val=vals.top();
            vals.pop();
            itr=itr->next;
        }
        return head;
        
    }
    */
    

    
};