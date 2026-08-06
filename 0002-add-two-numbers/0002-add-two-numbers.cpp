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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* head = nullptr;
        ListNode* temp = nullptr;
        int count =0;
        
        while(p1!=nullptr || p2!=nullptr){
            
            int x = (p1 != nullptr) ? p1->val : 0;
            int y = (p2 != nullptr) ? p2->val : 0;    
            int sumNode = x+y+count;
             
            if(sumNode>9){
              count = sumNode/10;
              sumNode = sumNode%10;
            }
            else{
                count=0;
            }

        ListNode* newNode = new ListNode(sumNode);
        
          if(head==nullptr){
            head=newNode;
            temp=newNode;
          }
          else{
            temp->next = newNode;
            temp=newNode;
          }
          if(p1!=nullptr){
          p1=p1->next;
          }
          
          if(p2!=nullptr){
          p2=p2->next;
          }
        }
        if(count>0){
            ListNode* newNode = new ListNode(count);
            temp->next=newNode;
        }
        return head;
    }
};