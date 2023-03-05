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
    //O(n+m), O(n) where n length of the biggest list
    /*
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        auto head = headA;
        unordered_set<ListNode*> nodes;
        while(head!=NULL){
            nodes.insert(head);
            head = head->next;
        }
        head = headB;
        while(head!=NULL){
            if(nodes.find(head)!=nodes.end()){
                return head;
            }
            head = head->next;
        }
        return NULL;
    }
    */
    // if the 2 lists are equal size and I advance a step in the 2 lists
    // per iteration they will meet
    // O(N+M), O(1)
    /*ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        auto it1 = headA;
        auto L1Size=0, L2Size=0;
        while(it1!=NULL){
            L1Size++;
            it1 = it1->next;
        }
        auto it2 = headB;
        while(it2!=NULL){
            L2Size++;
            it2 = it2->next;
        }
        it1 = headA; it2=headB;
        while(L1Size>L2Size){
            L1Size--;
            it1 = it1->next;
        }
        while(L2Size>L1Size){
            L2Size--;
            it2 = it2->next;   
        }
        while(it1!=NULL&&it2!=NULL){
            if(it1==it2)
                return it1;
            it1 = it1->next;
            it2 = it2->next;
        }
        return NULL;
    }*/
    //optmization for the above soln
    // we will iterate with the 2 pointers the same distance
    // so that they can reach to the point where they have the same number of tails remaining
    // if the lists as following
    // a-> c
    //   /
    // b-
    // walk a+c+b for the above one and b+c+a for second one and then walk togother
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *it1 = headA;
        ListNode *it2 = headB;
        while (it1 != it2) {
            it1 = it1 == nullptr ? headB : it1->next;
            it2 = it2 == nullptr ? headA : it2->next;
        }
        return it2;
    }
};