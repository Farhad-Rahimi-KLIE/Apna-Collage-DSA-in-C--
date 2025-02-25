#include<iostream>

using namespace std;

class Node{
    public:
     int data;
     Node* next;

     Node(int val){
        data = val;
        next = NULL;
     }
};

class Circular_Linked_List{
    Node* head;
    Node* tail;

public:
  Circular_Linked_List(){
    head = tail = NULL;
  };

  void InsertAthead(int val){
    Node* newNode = new Node(val);

    if (tail == NULL)
    {
        head = tail = newNode;
        tail->next - head;
    }else{
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
    
  }

  void InsertAtTail(int val){
    Node* newNode = new Node(val);

    if (tail == NULL)
    {
        head = tail = newNode;
        tail->next - head;
    }else{
        newNode->next = head;
        tail->next = newNode;
        tail = newNode;
    }
  }

  void deleteAtHead(){
    if (head == NULL) return;
    else if(head == tail){ // single node
        delete head;
        head = tail = NULL;
    }else{ // 2 or more
        Node* temp = head;
        head = head->next;
        tail->next = head;

        temp->next = NULL;
        delete temp;
    }
    
  }

  void deleteAtTail(){
    if (head == NULL) return;
    else if(head == tail){ // single node
        delete head;
        head = tail = NULL;
    }else{ // 2 or more
        Node* temp = tail;
        Node* prev = head;

        while (prev->next != tail)
        {
            prev = prev->next;
        }
        
        tail = prev;
        tail->next = head;

        temp->next = NULL;
        delete temp;
    }
    
  }

  void Print(){
    if (head == NULL) return;

    cout<<head->data <<"->";
    Node* temp = head->next;

    while (temp != head)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    
    cout<<temp->data<<endl;
  }

};
int main()
{
    Circular_Linked_List cll;

    // cll.InsertAthead(1);
    // cll.InsertAthead(2);
    // cll.InsertAthead(3);

    cll.InsertAtTail(1);
    cll.InsertAtTail(2);
    cll.InsertAtTail(3);

    // cll.deleteAtHead();
    
    cll.Print();
    cll.deleteAtTail();
    cll.Print();
    return 0;
}