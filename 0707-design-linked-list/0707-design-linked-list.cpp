class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next = NULL;
    }
};

class MyLinkedList {
public:
     
     Node* head;
    MyLinkedList() {
       head = NULL;
    }

    
    int get(int index) {
      Node* temp = head;
        int count=0;

     while(temp!=NULL){
        if(count==index){
         return temp->val;
        }
        temp =temp->next;
        count++;
     }   
     return -1;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next =head;
        head=newNode;
    }
    
    void addAtTail(int val) {
     Node* newNode = new Node(val);
      
        if (head == NULL) {
            head = newNode;
            return;
        }
      
      Node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    
    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* temp = head;
        int count = 0;

         while (temp != NULL && count < index - 1) {
            temp = temp->next;
            count++;
        }
        if (temp == NULL)
            return;

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    void deleteAtIndex(int index) {

        if (head == NULL)
            return;
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

         Node* curr = head;
        int count = 0;

        while (curr != NULL && count < index - 1) {
            curr = curr->next;
            count++;
        }

        if (curr == NULL || curr->next == NULL)
            return;

        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */