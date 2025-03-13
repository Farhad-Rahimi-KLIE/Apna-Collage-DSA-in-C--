#include<iostream>

using namespace std;



class Linked_List {
    Node* head;
    Node* tail;

    public:
     Linked_List(){
        head = tail = NULL;
     }

    void Push_front(int value){ // push front
        Node* newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void Push_back(int value){ // push back
        Node* newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void Pop_front(){ // Pop front
        if (head == NULL)
        {
            cout<<"Linked List is Empty \n";
            return;
        }
        Node* temp = head;
        head = head->next;
        tail->next = NULL;
        delete temp;
    }

    void Pop_back(){ // Pop back
        if (head == NULL)
        {
            cout<<"Linked List is Empty \n";
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

    void InsertPosition(int value, int position){ // insert to positions
        if (position < 0)
        {
            cout<<"Invalid Position \n";
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
                cout<<"Invalid position \n";
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int Search(int key){
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

    void PrintLL(){
        Node* temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"Null"<<endl;
     }
};

int main()
{
    Linked_List ll;

    ll.Push_front(10);
    ll.Push_front(20);
    ll.Push_front(30);

    ll.Push_back(40);
    ll.Push_back(50);

    ll.InsertPosition(66, 2);

    ll.Pop_front();
    ll.Pop_back();

    
    ll.PrintLL();
    cout<<ll.Search(50)<<endl;
    return 0;
}