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
    ListNode* removeNthFromEnd(ListNode* &head, int n) {
        ListNode* temp = head;
        int size=0;
        while(temp!=nullptr){
          size++;
          temp=temp->next;
        }
        int index = size-n; 
        if(index==0){
        ListNode* temp = head;
         head = head->next;
         delete temp;
         return head;
        }
        ListNode* prev = nullptr;
        ListNode* curr = head;
        int count=0;
        while(curr!=nullptr){
            if(count==index){
            ListNode* temp = curr;
            prev->next = curr->next;
            delete temp;
            break;
            }
            prev=curr;
            curr= curr->next;
            count++;
        }
       return head;
    }
};