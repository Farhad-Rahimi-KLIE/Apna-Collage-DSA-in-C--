#include<iostream>
#include<list>

using namespace std;

class Stack{
    list<int> v;

public:
 void Push(int value){
    v.push_front(value);
 }

 void Pop(){
    v.pop_front();
 }

 int Top(){
   return v.front();
 }

 bool empty(){
    return v.size() == 0;
 }
};



int main()
{
    Stack s;

    s.Push(10);
    s.Push(20);
    s.Push(30);

    while (!s.empty())
    {
        cout<<s.Top()<<endl;
        s.Pop();
    }
    
    return 0;
}