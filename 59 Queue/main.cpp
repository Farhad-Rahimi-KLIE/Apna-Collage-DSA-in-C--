#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node {
    public:
     int data;
     Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

class Queue {
    Node* head;
    Node* tail;

    public:
    Queue(){
        head = tail = NULL;
    }
    void Push(int value){
        Node* newNode = new Node(value);
        if(empty()){
            head = tail = newNode;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void Pop(){
        if(empty()){
            cout<<"q is empty";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int front(){
        return head->data;
    }

    bool empty(){
        return head == NULL;
    }
};

int main() {
    Queue q;

    q.Push(1);
    q.Push(2);
    q.Push(3);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.Pop();
    }
    cout<<endl;
    return 0;
}
