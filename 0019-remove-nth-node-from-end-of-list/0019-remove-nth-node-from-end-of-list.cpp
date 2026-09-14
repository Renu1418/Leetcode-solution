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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* temp = head;
        while(temp!=nullptr){
          size++;
          temp=temp->next;
        }
        int len = size-n;

        if(head==nullptr){
            return head;
        }
        if(len==0){
            head=head->next;
             return head;
        }


        int count=1;
        temp = head;
        while(temp->next!=nullptr){
           if(count==len){
              temp->next = temp->next->next;
              break;
           }
           count++;
           temp=temp->next;
        }
        return head;
    }
};