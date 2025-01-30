#include<iostream>
#include<deque> // double ended queue

using namespace std;
 // same operations like 1 push_back, 2 - push_front
 // 3 pop_back, 2 - pop_front
//  same like vector and list - size,erase,clear,begin,end,rbegin,
//  rend,insert,front,back
int main()
{
    deque<int> dq = {1,2,3,4,5};
    
    for (auto el : dq)
    {
        cout<<el<<" ";
    }
    cout<<endl;
    return 0;
}