#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Circular_Queue {
    int* arr;
    int currentSize, capacity;
    int f, r;
 public:
    Circular_Queue(int size){
        capacity = size;
        currentSize = 0;
        arr = new int[capacity];
        f = 0;
        r = -1;
    }

    void Push(int data){
        if(currentSize == capacity){
            cout<<"cq is full";
            return;
        }
        r = (r+1)%capacity;
        arr[r] = data;
        currentSize++;
    }

    void Pop(){
        if(empty()){
            cout<<"cq is empty";
            return;
        }
        f = (f+1)%capacity;
        currentSize--;
    }

    int front(){
        return arr[f];
    }

    bool empty(){
        return currentSize == 0;
    }

    void print(){
        for(int i =0; i < capacity; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
    Circular_Queue cq(3);

    cq.Push(1);
    cq.Push(2);
    cq.Push(3);
    cq.Pop();
    cq.Push(4);

    cq.print();
    return 0;
}
