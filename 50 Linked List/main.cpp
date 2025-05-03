#include<iostream>

using namespace std;

class Node
{
    public:
     int data;
     Node* next;

    Node(int value){
        data = value;
        next = NULL; 
     }
};

class Linked_List
{
    Node* head;
    Node* tail;

    public:
     Linked_List(){
        head = tail = NULL;
     }

     void Push_front(int value){
        Node* newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
        
     }

     void Push_back(int value){
        Node* newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
        
     }

     void Pop_front(){
        if (head == NULL)
        {
            cout<<"LL is empty \n";
            return;
        }
           
        Node* temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
     }

     void Pop_back(){
        if (head == NULL)
        {
            cout<<"LL is empty \n";
            return;
        }
           
        Node* temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        
        temp->next = NULL;
        delete tail;
        tail = temp;
     }

     void Insert(int value, int position){
        if (position < 0)
        {
            cout<<"Invalid Positions \n";
            return;
        }
        
        if (position == 0)
        {
            Push_front(value);
            return;
        }
        
        Node* temp = head;
        for (int i = 0; i < position-1; i++)
        {
            if (temp == NULL)
            {
                cout<<"INvalid position \n";
                return;
            }
            temp = temp->next;
        }

        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
     }

     void PrintLL(){
        Node* temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"Null"<<endl;
     }

     int search(int key){
        Node* temp = head;
        int index = 0;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return index;
            }
            temp = temp->next;
            index++;
        }
        return -1;
     }
};


int main()
{
    Linked_List ll;

    ll.Push_front(1);
    ll.Push_front(2);
    ll.Push_front(3);

    ll.Push_back(4);

    // ll.Pop_front();

    ll.Insert(6,1);

    
    ll.PrintLL();
    cout<<ll.search(2)<<endl;
    // ll.Pop_back();
    // ll.PrintLL();

    return 0;
}