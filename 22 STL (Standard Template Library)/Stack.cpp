#include<iostream>
#include<stack>

using namespace std;
 // Stack - last in first out
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    // Deleting top element
     s.pop();
     
    // Accessing the top element
    cout << s.top();


    // while (!s.empty())
    // {
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    // cout<<endl;
    return 0;
}