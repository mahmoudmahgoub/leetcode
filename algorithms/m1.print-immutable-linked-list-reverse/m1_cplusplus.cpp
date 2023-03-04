/**
 * // This is the ImmutableListNode's API interface.
 * // You should not implement it, or speculate about its implementation.
 * class ImmutableListNode {
 * public:
 *    void printValue(); // print the value of the node.
 *    ImmutableListNode* getNext(); // return the next node.
 * };
 */

class Solution {
public:
    //time: O(n), space:O(n)
    /*void printLinkedListInReverse(ImmutableListNode* head) {

         ImmutableListNode* itr =  head;

        stack <ImmutableListNode*> mystack;
        while(itr!=NULL){
            mystack.push(itr);
            itr = itr->getNext();
        }
        
        while(!mystack.empty())
        {
            mystack.top()->printValue();
            mystack.pop();
        }
        
    }*/
    //time: O(n^2), space:O(1)
    void printLinkedListInReverse(ImmutableListNode* head) {

         ImmutableListNode* itr =  head;
         ImmutableListNode* end =  NULL;
        
        while(end!=head){
            while(itr->getNext()!=end){
                itr = itr->getNext();
            }
            
            itr->printValue();
            end = itr;
            itr =head;
        }
        

        
    }
};