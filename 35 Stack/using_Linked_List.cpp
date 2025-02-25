#include<iostream>
#include<list>

using namespace std;

// stack using Linked List

class Stack {
    list<int> l;

public:
  void push(int value){
    l.push_front(value);
  }

  void pop(){
    l.pop_front();
  }

  int top(){
    return l.front();
  }

  bool empty(){
    return l.size() == 0;
  }
};

int main()
{
    // Stack using Vector

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl; // 30 20 10
    return 0;
}