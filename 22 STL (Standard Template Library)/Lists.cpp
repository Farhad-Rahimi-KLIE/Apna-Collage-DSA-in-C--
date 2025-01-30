#include<iostream>
#include<list>

using namespace std;

/*
 fucntions that excet in the vector
  1 - size,erase,clear,begin,end,rbegin,rend,insert,front,back
  2 - list means (Doubly Linked List)
*/

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(6);

    l.pop_back();
    l.pop_front();

    for (auto el : l)
    {
        cout<<el<<" ";
    }
    cout<<endl;
    return 0;
}