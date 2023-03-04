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
   //O(m+n), O(1)
   /* ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr)
            return list2;
        else if(list2 == nullptr)
            return list1;
        
        auto listTo = list1->val > list2->val ? list2:list1;
        auto listFrom = list1->val > list2->val ? list1:list2;
        auto mergedList = listTo; //ListTo itself will used for traverse
        auto listTo_prev = listTo;
        while(listTo&&listFrom){
            if(listTo->val>listFrom->val){
                listTo_prev->next = listFrom;
                auto listFrom_prev = listFrom;
                while(listFrom!=nullptr&&listFrom->val<listTo->val){
                    listFrom_prev = listFrom;
                    listFrom = listFrom->next;
                }
                listFrom_prev->next = listTo;
            }
            listTo_prev = listTo;
            listTo = listTo->next;
        }
        if(listFrom)
        listTo_prev->next =listFrom; 
        return mergedList;
    }*/

    //O(m+n),O(m+n)
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr)
            return list2;
        else if(list2 == nullptr)
            return list1;
        auto head =  list1->val < list2->val ? list1:list2;
        auto L2 =   list1->val < list2->val ? list2:list1;
        head->next = mergeTwoLists(head->next,L2);
        return head;
    }
};