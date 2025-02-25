#include<iostream>
#include<vector>

using namespace std;

// stack using Vector

class Stack {
    vector<int> v;

public:
  void push(int value){
    v.push_back(value);
  }

  void pop(){
    v.pop_back();
  }

  int top(){
    return v[v.size()-1];
  }

  bool empty(){
    return v.size() == 0;
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