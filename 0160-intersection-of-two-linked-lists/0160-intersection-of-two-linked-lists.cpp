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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA==nullptr && headB==nullptr ){
            return nullptr;
        }
        

        ListNode* skipA = headA;
        ListNode* skipB = headB;

        while(skipA!=skipB){
            if(skipA==nullptr){
                skipA = headB;
            }else{
            skipA = skipA->next;
            }
            if(skipB==nullptr){
                skipB = headA;
            }
            else{
            skipB = skipB->next;
            }
        }
        return skipA;;
    }
};